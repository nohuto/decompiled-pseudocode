/*
 * XREFs of ?FlushInteresting@PinchStretchRecognizer@@UEAAXW4GestureType@@@Z @ 0x1801E2220
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PinchStretchRecognizer::FlushInteresting(__int64 a1, char a2)
{
  __int64 v2; // rdx
  _QWORD *v3; // rcx
  __int64 result; // rax

  if ( a2 < 0 )
  {
    *(_BYTE *)(a1 + 56) &= ~2u;
    v2 = 2LL;
    v3 = (_QWORD *)(a1 + 16);
    do
    {
      result = v3[2];
      *v3++ = result;
      --v2;
    }
    while ( v2 );
  }
  return result;
}
