/*
 * XREFs of RtlpHpStackTraceSerialize @ 0x1801162AC
 * Callers:
 *     RtlQueryHeapInformation @ 0x18007D840 (RtlQueryHeapInformation.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18003A9D0 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18003AB90 (RtlReleaseSRWLockShared.c)
 *     RtlpEnumProcessHeaps @ 0x18007DC2C (RtlpEnumProcessHeaps.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800AAAD0 (_guard_xfg_dispatch_icall_nop.c)
 *     RtlpHpStackTraceSerializeRemote @ 0x1801163A8 (RtlpHpStackTraceSerializeRemote.c)
 *     RtlStackDbContextSerialize @ 0x180127244 (RtlStackDbContextSerialize.c)
 */

__int64 __fastcall RtlpHpStackTraceSerialize(__int64 a1, __int64 a2, _QWORD *a3)
{
  signed int v5; // ebx
  char v6; // al

  if ( a2 == 40 && *(_DWORD *)a1 == 2 )
  {
    if ( *(_QWORD *)(a1 + 8) == -1LL )
    {
      RtlAcquireSRWLockShared(&RtlpHpStackTrackingContext);
      if ( (dword_18017AE98 & 1) != 0 && (dword_18017AE98 & 2) != 0 )
      {
        *(_BYTE *)(a1 + 33) |= 1u;
        v5 = RtlStackDbContextSerialize(&qword_18017AEA0, *(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 24));
        if ( v5 >= 0 )
        {
          v5 = RtlpEnumProcessHeaps((__int64 (__fastcall *)(void *, __int64))RtlpHpStackTraceHeapSerialize, a1, 0);
          if ( v5 >= 0 )
          {
            v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(a1 + 16))(0LL, 0LL, *(_QWORD *)(a1 + 24));
            if ( v5 >= 0 )
            {
              v5 = 0;
              if ( a3 )
                *a3 = 0LL;
            }
          }
        }
      }
      else
      {
        v6 = *(_BYTE *)(a1 + 32) - 1;
        *(_BYTE *)(a1 + 33) = 0;
        v5 = v6 != 0 ? 0xC000000D : 0;
      }
      RtlReleaseSRWLockShared(&RtlpHpStackTrackingContext);
    }
    else
    {
      return (unsigned int)RtlpHpStackTraceSerializeRemote();
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v5;
}
