/*
 * XREFs of RtlpUnsuppressForwardReferencingCallTarget @ 0x18010A614
 * Callers:
 *     RtlpHandleInvalidUserCallTarget @ 0x18010A4F0 (RtlpHandleInvalidUserCallTarget.c)
 * Callees:
 *     LdrImageDirectoryEntryToLoadConfig @ 0x180034A60 (LdrImageDirectoryEntryToLoadConfig.c)
 *     RtlpImageDirectoryEntryToDataEx @ 0x18003C720 (RtlpImageDirectoryEntryToDataEx.c)
 *     ZwQueryVirtualMemory @ 0x1800A44D0 (ZwQueryVirtualMemory.c)
 *     RtlValidateUserCallTarget @ 0x18010A264 (RtlValidateUserCallTarget.c)
 *     RtlpGuardGrantSuppressedCallAccess @ 0x18010A414 (RtlpGuardGrantSuppressedCallAccess.c)
 */

__int64 __fastcall RtlpUnsuppressForwardReferencingCallTarget(unsigned __int64 a1)
{
  __int64 v2; // r14
  int VirtualMemory; // ebx
  _DWORD *Config; // rax
  int v5; // eax
  __int64 v6; // rsi
  _DWORD *i; // rsi
  _QWORD *j; // rdi
  __int64 result; // rax
  unsigned __int64 v10; // [rsp+30h] [rbp-50h]
  char v11; // [rsp+40h] [rbp-40h]
  __int64 v12; // [rsp+60h] [rbp-20h]
  int v13; // [rsp+70h] [rbp-10h]
  int v14; // [rsp+C8h] [rbp+48h] BYREF
  int v15; // [rsp+D0h] [rbp+50h] BYREF
  __int64 v16; // [rsp+D8h] [rbp+58h] BYREF

  v2 = 0LL;
  do
  {
    VirtualMemory = ZwQueryVirtualMemory();
    if ( VirtualMemory < 0 )
      break;
    if ( v13 == 0x1000000 )
    {
      VirtualMemory = ZwQueryVirtualMemory();
      if ( VirtualMemory >= 0 )
      {
        if ( v10 )
        {
          if ( (v11 & 2) == 0 && (v11 & 1) == 0 )
          {
            Config = LdrImageDirectoryEntryToLoadConfig(v10);
            if ( !Config || *Config < 0x94u || (Config[36] & 0x4000) == 0 )
            {
              v5 = RtlpImageDirectoryEntryToDataEx(v10, 1, 1u, &v15, (__int64)&v16);
              v6 = v16;
              if ( v5 < 0 )
                v6 = 0LL;
              v16 = v6;
              if ( v6 )
              {
                for ( i = (_DWORD *)(v6 + 12); *i; i += 5 )
                {
                  for ( j = (_QWORD *)(v10 + (unsigned int)i[1]); *j; ++j )
                  {
                    if ( *j == a1 && (unsigned int)RtlValidateUserCallTarget(a1, &v14) != 1 && (v14 & 0x10) != 0 )
                    {
                      result = RtlpGuardGrantSuppressedCallAccess(a1, 4u);
                      VirtualMemory = result;
                      if ( (int)result >= 0 )
                        return result;
                      break;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    v2 += v12;
  }
  while ( VirtualMemory >= 0 );
  return (unsigned int)VirtualMemory;
}
