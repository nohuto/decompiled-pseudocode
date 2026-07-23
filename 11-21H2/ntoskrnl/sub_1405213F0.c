/*
 * XREFs of sub_1405213F0 @ 0x1405213F0
 * Callers:
 *     sub_14051FFF8 @ 0x14051FFF8 (sub_14051FFF8.c)
 *     sub_140521310 @ 0x140521310 (sub_140521310.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140348830 (KeQueryActiveProcessorCountEx.c)
 *     sub_1405214A8 @ 0x1405214A8 (sub_1405214A8.c)
 */

__int64 __fastcall sub_1405213F0(__int64 a1)
{
  ULONG v2; // edi
  ULONG ActiveProcessorCount; // r14d
  __int64 v4; // rbx
  _QWORD *v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // rax
  int v8; // eax

  v2 = 0;
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  if ( ActiveProcessorCount )
  {
    v4 = 0LL;
    v5 = (_QWORD *)(a1 + 32);
    do
    {
      if ( *v5 )
        sub_1405214A8(v2);
      if ( *(_QWORD *)(a1 + 24) )
      {
        v6 = qword_140C4A420;
        if ( byte_140C4A428 )
        {
          v7 = *(_QWORD *)(v4 + qword_140C4A420 + 32);
          *(_QWORD *)(v4 + qword_140C4A420 + 40) = v7;
          *(_QWORD *)(v4 + v6 + 56) = v7;
        }
        else
        {
          v8 = *(_DWORD *)(v4 + qword_140C4A420 + 16);
          *(_DWORD *)(v4 + qword_140C4A420 + 20) = v8;
          *(_DWORD *)(v4 + v6 + 28) = v8;
        }
        dword_140C4A448 = 0;
      }
      ++v2;
      ++v5;
      v4 += 160LL;
    }
    while ( v2 < ActiveProcessorCount );
  }
  return 0LL;
}
