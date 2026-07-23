/*
 * XREFs of sub_14058DCA8 @ 0x14058DCA8
 * Callers:
 *     sub_140245DF4 @ 0x140245DF4 (sub_140245DF4.c)
 *     sub_14027AA30 @ 0x14027AA30 (sub_14027AA30.c)
 *     sub_14029A2A0 @ 0x14029A2A0 (sub_14029A2A0.c)
 *     sub_14031B510 @ 0x14031B510 (sub_14031B510.c)
 *     sub_14032CE60 @ 0x14032CE60 (sub_14032CE60.c)
 *     sub_1405803C8 @ 0x1405803C8 (sub_1405803C8.c)
 *     sub_140A69FD8 @ 0x140A69FD8 (sub_140A69FD8.c)
 * Callees:
 *     sub_14024C9A8 @ 0x14024C9A8 (sub_14024C9A8.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     KeDelayExecutionThread @ 0x1402B90A0 (KeDelayExecutionThread.c)
 *     sub_140363C8C @ 0x140363C8C (sub_140363C8C.c)
 *     sub_14059673C @ 0x14059673C (sub_14059673C.c)
 */

__int64 sub_14058DCA8()
{
  __int64 result; // rax
  __int64 (__fastcall *v1)(__int64); // rdx
  int v2; // r8d
  unsigned int v3; // ebx
  int v4; // edi

  result = KeGetCurrentIrql();
  if ( (unsigned __int8)result <= 1u )
  {
    result = sub_14024C9A8();
    v3 = 0;
    if ( !(_DWORD)result )
    {
      result = (__int64)sub_1403CFD20;
      if ( (char *)v1 != (char *)sub_1403CFD20 )
      {
        result = (__int64)sub_1403C5160;
        if ( v1 != sub_1403C5160 )
        {
          if ( v2 == 1 )
          {
            result = (unsigned int)_InterlockedIncrement(&dword_140C529C8);
            if ( (_DWORD)result != 1 )
              return result;
            sub_14059673C(&StartContext);
          }
          _InterlockedIncrement(&dword_140C552AC);
          result = qword_140C59300;
          if ( qword_140C59300 != qword_140C593E0 )
          {
            v4 = dword_140C55244;
            do
            {
              KeSetEvent(&stru_140C552B0, 0, 0);
              sub_140363C8C((__int64)sub_1403992C0, 2LL, 0, 0);
              result = qword_140C59300;
              if ( qword_140C59300 == qword_140C593E0 )
                break;
              KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&stru_14000EEA8);
              result = (unsigned int)dword_140C55244;
              if ( v4 != dword_140C55244 )
              {
                v4 = dword_140C55244;
                v3 = -1;
              }
              ++v3;
            }
            while ( v3 < 0xFF );
          }
          _InterlockedDecrement(&dword_140C552AC);
        }
      }
    }
  }
  return result;
}
