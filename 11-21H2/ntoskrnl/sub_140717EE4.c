/*
 * XREFs of sub_140717EE4 @ 0x140717EE4
 * Callers:
 *     sub_14071784C @ 0x14071784C (sub_14071784C.c)
 *     sub_140742230 @ 0x140742230 (sub_140742230.c)
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140717FDC @ 0x140717FDC (sub_140717FDC.c)
 *     sub_140718128 @ 0x140718128 (sub_140718128.c)
 *     sub_140742A44 @ 0x140742A44 (sub_140742A44.c)
 *     sub_14091BDB8 @ 0x14091BDB8 (sub_14091BDB8.c)
 */

__int64 __fastcall sub_140717EE4(__int64 a1, __int64 a2, unsigned int a3, int a4, PCLFS_LSN plsnFinish)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v6; // r14d
  int v10; // edi
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // r8
  unsigned int v14; // esi
  __int64 v16; // rdx
  __int64 v17; // r8
  int v18; // r14d
  int v19; // edx
  int v20; // r9d
  unsigned int v21; // [rsp+30h] [rbp-91h] BYREF
  int v22; // [rsp+34h] [rbp-8Dh] BYREF
  int v23; // [rsp+38h] [rbp-89h] BYREF
  int v24; // [rsp+3Ch] [rbp-85h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v25; // [rsp+40h] [rbp-81h] BYREF
  int *v26; // [rsp+60h] [rbp-61h]
  int v27; // [rsp+68h] [rbp-59h]
  int v28; // [rsp+6Ch] [rbp-55h]
  int *v29; // [rsp+70h] [rbp-51h]
  int v30; // [rsp+78h] [rbp-49h]
  int v31; // [rsp+7Ch] [rbp-45h]
  struct _EVENT_DATA_DESCRIPTOR v32; // [rsp+80h] [rbp-41h] BYREF
  int *v33; // [rsp+A0h] [rbp-21h]
  int v34; // [rsp+A8h] [rbp-19h]
  int v35; // [rsp+ACh] [rbp-15h]
  int *v36; // [rsp+B0h] [rbp-11h]
  int v37; // [rsp+B8h] [rbp-9h]
  int v38; // [rsp+BCh] [rbp-5h]

  CurrentThread = KeGetCurrentThread();
  v6 = a4;
  v21 = 0;
  v23 = a4;
  --*((_WORD *)CurrentThread + 242);
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 128), 1u);
  v10 = 0;
  while ( 1 )
  {
    v11 = sub_140718128(a1, a2, a3, v6, plsnFinish);
    v14 = v11;
    if ( v11 != -1072037859 )
      break;
    if ( v10 )
    {
      if ( v10 != 1 )
        goto LABEL_6;
LABEL_11:
      v21 = ++v10;
      v18 = sub_14091BDB8(a1);
      if ( (unsigned int)dword_140C03868 > 5 && sub_1402A2000((__int64)&dword_140C03868, 1LL) )
      {
        v28 = 0;
        v31 = 0;
        v26 = &v24;
        v24 = v16;
        v29 = &v22;
        v27 = v16 + 3;
        v30 = v16 + 3;
        v22 = v18;
        sub_14020A9C4((__int64)&dword_140C03868, (unsigned __int8 *)byte_140029F61, 0LL, 0LL, v16 + 3, &v25);
      }
      if ( v18 < 0 )
        goto LABEL_6;
      LOBYTE(v17) = 1;
      sub_140742A44(a1, v16, v17);
      v6 = v23;
    }
    else
    {
      v10 = 1;
      v21 = 1;
      LOBYTE(v13) = 1;
      if ( (int)sub_140742A44(a1, v12, v13) < 0 )
        goto LABEL_11;
    }
  }
  if ( v11 >= 0
    && (int)sub_140717FDC(
              *(PLOG_FILE_OBJECT *)(a1 + 88),
              (PCLFS_LSN)(a1 + 120),
              plsnFinish,
              *(_DWORD *)(a1 + 72),
              *(_DWORD *)(a1 + 68),
              (__int64)&v21) >= 0
    && v21 >= 0x50 )
  {
    sub_14091BDB8(a1);
    if ( (unsigned int)dword_140C03868 > 5 )
    {
      if ( sub_1402A2000((__int64)&dword_140C03868, 1LL) )
      {
        v35 = 0;
        v38 = 0;
        v33 = &v23;
        v34 = v19 + 3;
        v36 = &v22;
        v22 = v20;
        v37 = v19 + 3;
        v23 = 2;
        sub_14020A9C4((__int64)&dword_140C03868, (unsigned __int8 *)&word_140029F2E, 0LL, 0LL, v19 + 3, &v32);
      }
    }
  }
LABEL_6:
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 128));
  KeLeaveCriticalRegion();
  return v14;
}
