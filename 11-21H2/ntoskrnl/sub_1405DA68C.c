/*
 * XREFs of sub_1405DA68C @ 0x1405DA68C
 * Callers:
 *     sub_140864680 @ 0x140864680 (sub_140864680.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1405DB13C @ 0x1405DB13C (sub_1405DB13C.c)
 */

void sub_1405DA68C()
{
  KIRQL v0; // al
  __int64 v1; // r8
  unsigned int v2; // edx
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _QWORD **v5; // rsi
  _QWORD *v6; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v9; // r9
  int v10; // eax
  bool v11; // zf
  unsigned int i; // [rsp+40h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-38h] BYREF
  _QWORD *v14; // [rsp+58h] [rbp-28h]
  int v15; // [rsp+60h] [rbp-20h]
  int v16; // [rsp+64h] [rbp-1Ch]
  char *v17; // [rsp+68h] [rbp-18h]
  int v18; // [rsp+70h] [rbp-10h]
  int v19; // [rsp+74h] [rbp-Ch]

  if ( qword_140D068A8 )
  {
    for ( i = 0; i < *(_DWORD *)qword_140D068A8; ++i )
    {
      UserData.Reserved = 0;
      UserData.Size = 4;
      UserData.Ptr = (ULONGLONG)&i;
      sub_1405DB13C(&stru_140038248);
    }
    if ( byte_140C5AE30 && EtwEventEnabled(qword_140C1F580, &stru_140037D10) )
    {
      v0 = KeAcquireSpinLockRaiseToDpc(&qword_140C23008);
      v1 = qword_140D068A8;
      v2 = 0;
      i = 0;
      v3 = v0;
      if ( *(_DWORD *)qword_140D068A8 )
      {
        v4 = 0LL;
        do
        {
          UserData.Reserved = 0;
          UserData.Ptr = (ULONGLONG)&i;
          UserData.Size = 4;
          v5 = (_QWORD **)(448 * v4 + v1 + 88);
          v6 = *v5;
          if ( *v5 != v5 )
          {
            do
            {
              v16 = 0;
              v19 = 0;
              v14 = v6 + 2;
              v15 = 4;
              v17 = (char *)v6 + 20;
              v18 = 4;
              EtwWriteEx(qword_140C1F580, &stru_140037D10, 0LL, 0, 0LL, 0LL, 3u, &UserData);
              v6 = (_QWORD *)*v6;
            }
            while ( v6 != v5 );
            v2 = i;
          }
          v1 = qword_140D068A8;
          i = ++v2;
          v4 = v2;
        }
        while ( v2 < *(_DWORD *)qword_140D068A8 );
      }
      KeReleaseSpinLockFromDpcLevel(&qword_140C23008);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v3 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v9 = *((_QWORD *)CurrentPrcb + 4375);
            v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
            v11 = (v10 & *(_DWORD *)(v9 + 20)) == 0;
            *(_DWORD *)(v9 + 20) &= v10;
            if ( v11 )
              sub_140418E4C((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(v3);
    }
  }
}
