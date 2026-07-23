/*
 * XREFs of sub_140A5A6CC @ 0x140A5A6CC
 * Callers:
 *     sub_140A5A680 @ 0x140A5A680 (sub_140A5A680.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140348830 (KeQueryActiveProcessorCountEx.c)
 *     KeSetSystemGroupAffinityThread @ 0x14035BFE0 (KeSetSystemGroupAffinityThread.c)
 *     sub_1403D2C84 @ 0x1403D2C84 (sub_1403D2C84.c)
 *     sub_1403D2CE0 @ 0x1403D2CE0 (sub_1403D2CE0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140506DF0 @ 0x140506DF0 (sub_140506DF0.c)
 *     sub_140A5A7C8 @ 0x140A5A7C8 (sub_140A5A7C8.c)
 *     sub_140A5A8F8 @ 0x140A5A8F8 (sub_140A5A8F8.c)
 *     sub_140A5B19C @ 0x140A5B19C (sub_140A5B19C.c)
 *     sub_140A61424 @ 0x140A61424 (sub_140A61424.c)
 *     sub_140A61564 @ 0x140A61564 (sub_140A61564.c)
 */

__int64 __fastcall sub_140A5A6CC(__int64 a1, _DWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  ULONG v10; // edi
  ULONG ActiveProcessorCount; // ebp
  unsigned int *v12; // rsi
  unsigned int v13; // edx
  _GROUP_AFFINITY *v14; // rdx
  __int64 i; // rbx
  signed __int32 v16[8]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v17; // [rsp+20h] [rbp-38h]
  _GROUP_AFFINITY Affinity; // [rsp+28h] [rbp-30h] BYREF
  __int128 v19; // [rsp+38h] [rbp-20h] BYREF

  v17 = 0LL;
  Affinity = 0LL;
  v19 = 0LL;
  if ( (_DWORD)a1 )
  {
    if ( (_DWORD)a1 == 1 )
    {
      dword_140C549B4 = a2[7];
      qword_140C54988 = a2;
      sub_140A5A7C8(a2);
      if ( byte_140D014BA )
        sub_140506DF0();
      if ( !PshedIsSystemWheaEnabled() )
      {
        LOBYTE(v7) = byte_140C54968 != 0;
        sub_140A61424(v7);
      }
      _InterlockedOr(v16, 0);
      if ( (unsigned __int8)PshedInitAvailable(v7, v6, v8, v9, v17) )
      {
        PshedInitGlobal();
        v10 = 0;
        ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
        if ( ActiveProcessorCount )
        {
          v12 = dword_140D0E5E0;
          do
          {
            v13 = *v12;
            Affinity.Reserved[1] = 0;
            Affinity.Reserved[2] = 0;
            *(_DWORD *)&Affinity.Group = (unsigned __int16)(v13 >> 6);
            Affinity.Mask = 1LL << (v13 & 0x3F);
            if ( v10 )
              v14 = 0LL;
            else
              v14 = (_GROUP_AFFINITY *)&v19;
            KeSetSystemGroupAffinityThread(&Affinity, v14);
            for ( i = *(_QWORD *)&KeGetPcr()->HalReserved[6]; i; i = *(_QWORD *)(i + 184) )
              PshedInitProc(*(unsigned int *)(i + 172));
            ++v10;
            ++v12;
          }
          while ( v10 < ActiveProcessorCount );
        }
      }
      byte_140C54998 = 1;
    }
    else
    {
      LODWORD(v17) = HIDWORD(KeGetPcr()[1].LockArray);
      sub_140A5A8F8(a2, v17);
      sub_140A61564(0LL, 0LL, v17);
    }
  }
  else
  {
    dword_140C549B4 = a2[7];
    qword_140C54988 = a2;
    sub_140A5B19C(a1, a2, a3, a4, v17);
    sub_1403D2CE0();
    sub_1403D2C84();
    sub_140A5A7C8(a2);
  }
  return 0LL;
}
