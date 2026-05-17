/*
 * XREFs of RtlStringCopyWorkerW @ 0x180004144
 * Callers:
 *     RtlFormatMessageEx @ 0x180003870 (RtlFormatMessageEx.c)
 * Callees:
 *     <none>
 */

__int64 RtlStringCopyWorkerW(_WORD *a1, _QWORD a2, _QWORD *a3, __int64 a4, ...)
{
  _WORD *v4; // r10
  __int64 v5; // r11
  __int64 v6; // r9
  __int64 v7; // rdx
  __int16 v8; // ax
  _WORD *v9; // rcx
  __int64 result; // rax
  __int64 v11; // rcx

  v4 = a1;
  v5 = 0LL;
  v6 = a4 - (_QWORD)a1;
  v7 = 32LL;
  do
  {
    if ( v7 == -2147483614 )
      break;
    v8 = *(_WORD *)((char *)v4 + v6);
    if ( !v8 )
      break;
    *v4 = v8;
    ++v5;
    ++v4;
    --v7;
  }
  while ( v7 );
  v9 = v4 - 1;
  result = v7 == 0 ? 0x80000005 : 0;
  if ( v7 )
    v9 = v4;
  *v9 = 0;
  if ( a3 )
  {
    v11 = v5 - 1;
    if ( v7 )
      v11 = v5;
    *a3 = v11;
  }
  return result;
}
