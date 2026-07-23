/*
 * XREFs of sub_1409A5C10 @ 0x1409A5C10
 * Callers:
 *     <none>
 * Callees:
 *     sub_140231240 @ 0x140231240 (sub_140231240.c)
 *     sub_1402312E0 @ 0x1402312E0 (sub_1402312E0.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     sub_1402DF880 @ 0x1402DF880 (sub_1402DF880.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1409A1E04 @ 0x1409A1E04 (sub_1409A1E04.c)
 *     sub_1409A3450 @ 0x1409A3450 (sub_1409A3450.c)
 *     sub_1409A52C8 @ 0x1409A52C8 (sub_1409A52C8.c)
 *     sub_1409A54C0 @ 0x1409A54C0 (sub_1409A54C0.c)
 *     sub_1409A5540 @ 0x1409A5540 (sub_1409A5540.c)
 *     sub_1409A8628 @ 0x1409A8628 (sub_1409A8628.c)
 *     sub_1409AA120 @ 0x1409AA120 (sub_1409AA120.c)
 *     sub_1409AA1E8 @ 0x1409AA1E8 (sub_1409AA1E8.c)
 *     sub_1409AA27C @ 0x1409AA27C (sub_1409AA27C.c)
 */

__int64 __fastcall sub_1409A5C10(unsigned int *a1)
{
  char v2; // r13
  struct _KTHREAD *CurrentThread; // rax
  __int64 v4; // r14
  unsigned int v5; // r12d
  unsigned int v6; // ecx
  ULONG_PTR v7; // rax
  unsigned int v8; // esi
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  int v12; // eax
  unsigned int i; // r15d
  __int64 v14; // rdx
  unsigned int v15; // ebx
  unsigned int v16; // ebx
  unsigned int v17; // ebp
  char v18; // bl
  unsigned int v19; // ebp
  unsigned int v20; // eax
  unsigned int v21; // ebx
  char v23; // [rsp+20h] [rbp-68h] BYREF
  char v24[7]; // [rsp+21h] [rbp-67h] BYREF
  _OWORD v25[3]; // [rsp+28h] [rbp-60h] BYREF

  memset(v25, 0, sizeof(v25));
  v24[0] = 0;
  v2 = 0;
  CurrentThread = KeGetCurrentThread();
  v4 = 0LL;
  v23 = 0;
  --*((_WORD *)CurrentThread + 242);
  ExAcquireResourceExclusiveLite(&stru_140C1C020, 1u);
  v5 = *a1;
  sub_1409AA1E8(*a1);
  v6 = a1[1] & 0xFFFFFFFC | 2;
  a1[1] = v6;
  *((_QWORD *)a1 + 29) = KeGetCurrentThread();
  if ( (v6 & 4) == 0 )
  {
    v7 = sub_1402DF880(v5);
    v4 = v7;
    if ( !v7 )
    {
      v8 = -1073740715;
      v9 = 0xFFFFFFFFLL;
      v10 = 3221226581LL;
      v11 = 2910LL;
LABEL_4:
      sub_1409A8628("TtmpSessionWorker", v11, v9, v10);
      goto LABEL_25;
    }
    v12 = sub_1402312E0(v7);
    v8 = v12;
    if ( v12 < 0 )
    {
      v10 = (unsigned int)v12;
      v9 = (unsigned int)v12;
      v11 = 2919LL;
      goto LABEL_4;
    }
    v2 = 1;
  }
  v8 = 0;
  for ( i = 1; ; ++i )
  {
    v21 = a1[56];
    a1[56] = 0;
    v16 = v21 & 7;
    if ( !v16 )
      break;
    sub_1409AA120(v5, v16, i);
    if ( (v16 & 2) != 0 )
    {
      sub_1409A3450(a1, &v23, v24);
      v15 = (v16 & 0xFD ^ (v16 & 0xFD | (unsigned __int8)(4 * v23))) & 4 ^ v16 & 0xFFFFFFFD;
      v16 = ((unsigned __int8)v15 ^ (unsigned __int8)(v15 | v24[0])) & 1 ^ v15;
    }
    v17 = v16;
    v18 = v16 & 0xFB;
    v19 = v17 >> 2;
    if ( (_BYTE)v19 )
    {
      if ( (a1[1] & 0x10) != 0 )
      {
        v8 = sub_1409A52C8((__int64)a1, v14);
        if ( v8 != 259 )
        {
          v20 = a1[1];
          if ( (v20 & 0x1000) != 0 )
          {
            a1[1] = v20 & 0xFFFFEFFF;
LABEL_17:
            sub_1409A1E04((__int64)a1);
            goto LABEL_18;
          }
        }
      }
    }
    if ( (v18 & 1) != 0 )
      goto LABEL_17;
LABEL_18:
    if ( (_BYTE)v19 && (a1[1] & 0x20) != 0 )
      v8 = sub_1409A54C0((__int64)a1, v14);
  }
  if ( v2 )
    sub_140231240(v4, (__int64)v25);
LABEL_25:
  a1[1] &= ~2u;
  *((_QWORD *)a1 + 29) = 0LL;
  ExReleaseResourceLite(&stru_140C1C020);
  KeLeaveCriticalRegion();
  sub_1409A5540((volatile signed __int32 *)a1);
  return sub_1409AA27C(v5, v8);
}
