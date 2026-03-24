/*
 * XREFs of KeyboardClassDequeueRead @ 0x1C0004F50
 * Callers:
 *     KeyboardClassServiceCallback @ 0x1C0005680 (KeyboardClassServiceCallback.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall KeyboardClassDequeueRead(__int64 a1)
{
  _QWORD **v1; // r8
  _QWORD *v2; // rdx
  _QWORD *v3; // rcx
  _QWORD *v4; // rax

  v1 = (_QWORD **)(a1 + 168);
LABEL_2:
  v2 = 0LL;
  do
  {
    v3 = *v1;
    if ( *v1 == v1 )
      break;
    if ( (_QWORD **)v3[1] != v1 || (v4 = (_QWORD *)*v3, *(_QWORD **)(*v3 + 8LL) != v3) )
      __fastfail(3u);
    *v1 = v4;
    v2 = v3 - 21;
    v4[1] = v1;
    if ( !_InterlockedExchange64(v3 - 8, 0LL) )
    {
      v3[1] = v3;
      *v3 = v3;
      goto LABEL_2;
    }
  }
  while ( v3 == (_QWORD *)168 );
  return v2;
}
