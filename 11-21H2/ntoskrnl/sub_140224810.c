/*
 * XREFs of sub_140224810 @ 0x140224810
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_140224C00 @ 0x140224C00 (sub_140224C00.c)
 *     sub_140224E90 @ 0x140224E90 (sub_140224E90.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140882446 @ 0x140882446 (sub_140882446.c)
 */

__int64 sub_140224810()
{
  bool v0; // si
  KIRQL v1; // al
  char v2; // di
  unsigned __int64 v3; // rbx
  REGHANDLE v4; // rbx
  __int64 v5; // rcx
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v9; // r9
  int v10; // eax
  bool v11; // zf
  struct _KPRCB *v12; // r9
  __int64 v13; // r8
  BOOL v14; // [rsp+40h] [rbp-28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-20h] BYREF

  while ( 1 )
  {
    v0 = 1;
    v1 = KeAcquireSpinLockRaiseToDpc(&qword_140C23AE0);
    v2 = byte_140C23AE9;
    v3 = v1;
    if ( byte_140C23AE9 == byte_140C2330C )
      break;
    byte_140C2330C = byte_140C23AE9;
    KeReleaseSpinLockFromDpcLevel(&qword_140C23AE0);
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
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(v3);
    v14 = 0;
    if ( byte_140C5AE30 )
    {
      v4 = qword_140C1F580;
      if ( EtwEventEnabled(qword_140C1F580, &stru_14000E910) )
      {
        UserData.Size = 4;
        UserData.Reserved = 0;
        v14 = v2 != 0;
        UserData.Ptr = (ULONGLONG)&v14;
        EtwWriteEx(v4, &stru_14000E910, 0LL, 0, 0LL, 0LL, 1u, &UserData);
      }
    }
    sub_140224E90(&qword_140C22FE0);
    if ( !qword_140C1D028 )
    {
      if ( v2 )
        v0 = 0;
      else
        v0 = byte_140C23B10 != 0;
    }
    sub_140224C00(&qword_140C22FE0);
    if ( v0 )
    {
      LOBYTE(v5) = v2;
      byte_140C23B10 = v2;
      sub_140882446(v5);
    }
  }
  byte_140C23AE8 = 0;
  KeReleaseSpinLockFromDpcLevel(&qword_140C23AE0);
  result = (unsigned int)dword_140D06B08;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v3 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        v12 = KeGetCurrentPrcb();
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
        v13 = *((_QWORD *)v12 + 4375);
        v11 = ((unsigned int)result & *(_DWORD *)(v13 + 20)) == 0;
        *(_DWORD *)(v13 + 20) &= result;
        if ( v11 )
          result = sub_140418E4C(v12);
      }
    }
  }
  __writecr8(v3);
  return result;
}
