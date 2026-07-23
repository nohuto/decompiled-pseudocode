/*
 * XREFs of sub_1406C9754 @ 0x1406C9754
 * Callers:
 *     sub_1406C955C @ 0x1406C955C (sub_1406C955C.c)
 *     sub_14073B5A0 @ 0x14073B5A0 (sub_14073B5A0.c)
 *     sub_14085FAA4 @ 0x14085FAA4 (sub_14085FAA4.c)
 *     ExGetSystemFirmwareTable @ 0x140860C10 (ExGetSystemFirmwareTable.c)
 *     ExEnumerateSystemFirmwareTables @ 0x1409F5C90 (ExEnumerateSystemFirmwareTables.c)
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ExAllocatePoolWithQuotaTag @ 0x140367B10 (ExAllocatePoolWithQuotaTag.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1406C9928 @ 0x1406C9928 (sub_1406C9928.c)
 *     sub_1409FC784 @ 0x1409FC784 (sub_1409FC784.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1406C9754(char *Src, char a2, unsigned int a3, _DWORD *a4)
{
  int v7; // edi
  unsigned int *v8; // rbx
  unsigned int *v9; // rsi
  unsigned int v10; // r14d
  unsigned int *PoolWithQuotaTag; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v14; // rdx
  __int64 v15; // r14
  __int64 v16; // rcx
  unsigned int v17; // eax
  __int64 *v19; // rax
  PVOID P; // [rsp+30h] [rbp-78h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v21; // [rsp+38h] [rbp-70h] BYREF
  PVOID *p_P; // [rsp+58h] [rbp-50h]
  int v23; // [rsp+60h] [rbp-48h]
  int v24; // [rsp+64h] [rbp-44h]

  v7 = 0;
  v8 = 0LL;
  P = 0LL;
  if ( a3 < 0x10 )
  {
    *a4 = 16;
    v7 = -1073741820;
    goto LABEL_20;
  }
  v9 = (unsigned int *)Src;
  v10 = a3 - 16;
  if ( !a2 )
    goto LABEL_5;
  PoolWithQuotaTag = (unsigned int *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, a3, 0x54465241u);
  v8 = PoolWithQuotaTag;
  P = PoolWithQuotaTag;
  if ( !PoolWithQuotaTag )
  {
    v7 = -1073741670;
    goto LABEL_20;
  }
  memmove(PoolWithQuotaTag, Src, a3);
  v9 = v8;
  if ( !(unsigned __int8)sub_1406C9928(*((_QWORD *)KeGetCurrentThread() + 23))
    || *v8 == 1381190978 && (unsigned __int8)sub_1409FC784(0LL) )
  {
LABEL_5:
    v9[3] = v10;
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    ExAcquireResourceSharedLite(&stru_140C15BE0, 1u);
    v15 = 0LL;
    v16 = qword_140C15BD0 - 24;
    if ( &qword_140C15BD0 != (__int64 *)qword_140C15BD0 )
    {
      v14 = *v9;
      while ( *(_DWORD *)v16 != (_DWORD)v14 )
      {
        v19 = *(__int64 **)(v16 + 24);
        v16 = (__int64)(v19 - 3);
        if ( &qword_140C15BD0 == v19 )
          goto LABEL_9;
      }
      v15 = *(_QWORD *)(v16 + 8);
    }
LABEL_9:
    if ( v15 )
      v7 = sub_14042A5E0(v9, v14);
    ExReleaseResourceLite(&stru_140C15BE0);
    sub_1402F9540((__int64)KeGetCurrentThread());
    if ( v15 )
    {
      if ( a2 )
      {
        if ( v7 >= 0 )
          memmove(Src + 16, v8 + 4, v8[3]);
        if ( (int)(v7 + 0x80000000) < 0 || v7 == -1073741789 )
          *((_DWORD *)Src + 3) = v8[3];
        v17 = v8[3];
      }
      else
      {
        v17 = v9[3];
      }
      *a4 = v17 + 16;
    }
    else
    {
      v7 = -1073741822;
    }
  }
  else
  {
    v7 = -1073741790;
    if ( (unsigned int)dword_140C06518 > 5 && sub_1402A2000((__int64)&dword_140C06518, 0x200000000000LL) )
    {
      LODWORD(P) = *v8;
      p_P = &P;
      v23 = 4;
      v24 = 0;
      sub_14020A9C4((__int64)&dword_140C06518, (unsigned __int8 *)byte_140035DB9, 0LL, 0LL, 3u, &v21);
    }
  }
LABEL_20:
  if ( v8 )
    ExFreePoolWithTag(v8, 0x54465241u);
  return (unsigned int)v7;
}
