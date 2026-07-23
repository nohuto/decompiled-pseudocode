/*
 * XREFs of sub_140379848 @ 0x140379848
 * Callers:
 *     sub_1402376A4 @ 0x1402376A4 (sub_1402376A4.c)
 *     sub_1403795D4 @ 0x1403795D4 (sub_1403795D4.c)
 * Callees:
 *     KeResetEvent @ 0x1402A40D0 (KeResetEvent.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 */

__int64 __fastcall sub_140379848(__int64 a1, _OWORD *a2, LARGE_INTEGER *a3, int a4)
{
  struct _KEVENT *v5; // rsi
  unsigned int v9; // r10d
  int v10; // eax
  signed __int32 v12; // eax

  v5 = (struct _KEVENT *)(a1 + 32);
  while ( 1 )
  {
    v9 = KeWaitForSingleObject(v5, Executive, 0, 0, a3);
    if ( !v9 )
      break;
    if ( !a4 )
      return v9;
    v12 = *(_DWORD *)(a1 + 56);
    if ( (v12 & 1) == 0 && (_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 56), v12 | 2, v12) & 1) == 0 )
      return (unsigned int)-1073741536;
  }
  KeResetEvent(v5);
  if ( a2 )
  {
    *a2 = *(_OWORD *)(a1 + 64);
    a2[1] = *(_OWORD *)(a1 + 80);
    a2[2] = *(_OWORD *)(a1 + 96);
  }
  v10 = *(_DWORD *)(a1 + 56);
  *(_DWORD *)(a1 + 56) = 0;
  return (v10 & 2) != 0 ? 0xC0000120 : 0;
}
