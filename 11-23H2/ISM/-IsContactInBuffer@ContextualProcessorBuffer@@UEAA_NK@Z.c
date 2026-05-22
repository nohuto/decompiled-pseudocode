/*
 * XREFs of ?IsContactInBuffer@ContextualProcessorBuffer@@UEAA_NK@Z @ 0x18000BA70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall ContextualProcessorBuffer::IsContactInBuffer(ContextualProcessorBuffer *this, int a2)
{
  _QWORD *v2; // rax
  _QWORD *v3; // r9
  _QWORD *v4; // r10
  __int64 v5; // rcx

  v2 = (_QWORD *)*((_QWORD *)this + 3);
  v3 = (_QWORD *)*((_QWORD *)this + 4);
  if ( v2 == v3 )
    return 0;
  while ( 1 )
  {
    v4 = (_QWORD *)(v2[4]
                  + 16
                  * ((0x100000001B3LL
                    * (HIBYTE(a2) ^ (0x100000001B3LL
                                   * (BYTE2(a2) ^ (0x100000001B3LL
                                                 * (BYTE1(a2) ^ (0x100000001B3LL
                                                               * ((unsigned __int8)a2 ^ 0xCBF29CE484222325uLL)))))))) & v2[7]));
    v5 = v4[1];
    if ( v5 == v2[2] )
    {
LABEL_3:
      v5 = 0LL;
    }
    else
    {
      while ( a2 != *(_DWORD *)(v5 + 16) )
      {
        if ( v5 == *v4 )
          goto LABEL_3;
        v5 = *(_QWORD *)(v5 + 8);
      }
    }
    if ( v5 )
      return 1;
    v2 += 28;
    if ( v2 == v3 )
      return 0;
  }
}
