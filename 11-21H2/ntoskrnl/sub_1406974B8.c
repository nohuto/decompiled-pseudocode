/*
 * XREFs of sub_1406974B8 @ 0x1406974B8
 * Callers:
 *     sub_1406B89A0 @ 0x1406B89A0 (sub_1406B89A0.c)
 *     sub_1406BD994 @ 0x1406BD994 (sub_1406BD994.c)
 *     sub_140785B98 @ 0x140785B98 (sub_140785B98.c)
 * Callees:
 *     sub_1402DF9D0 @ 0x1402DF9D0 (sub_1402DF9D0.c)
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     RtlUnicodeStringToInteger @ 0x140698DE0 (RtlUnicodeStringToInteger.c)
 */

char __fastcall sub_1406974B8(_WORD *a1)
{
  int v2; // ebp
  __int16 v4; // ax
  unsigned int v5; // ecx
  __int64 v6; // rsi
  __int16 v7; // ax
  __int64 i; // rcx
  __int16 v9; // dx
  int v10; // edi
  __int64 v11; // rdx
  __int16 v12; // cx
  __int64 v13; // r8
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int64 Value; // [rsp+68h] [rbp+20h] BYREF

  Value = 0LL;
  DestinationString = 0LL;
  if ( (int)sub_1402DF9D0(a1, 0x7FFFLL, &Value) < 0 )
    return 0;
  v2 = Value;
  if ( Value < 5 || *a1 != 64 )
    return 0;
  v4 = a1[1];
  v5 = 1;
  while ( v4 && v4 != 44 )
    v4 = a1[++v5];
  if ( a1[v5] != 44 )
    return 0;
  v6 = v5 + 1;
  v7 = a1[v6];
  if ( v7 != 35 && v7 != 45 )
    return 0;
  for ( i = (unsigned int)(v6 + 1); ; i = (unsigned int)(i + 1) )
  {
    v9 = a1[i];
    if ( !v9 || v9 == 59 )
      break;
  }
  v10 = 0;
  if ( a1[i] == 59 )
    v10 = i;
  if ( RtlInitUnicodeStringEx(&DestinationString, &a1[v6 + 1]) < 0 )
    return 0;
  if ( v10 )
  {
    DestinationString.Length = 2 * (v10 - v6) - 2;
    DestinationString.MaximumLength = DestinationString.Length;
  }
  if ( RtlUnicodeStringToInteger(&DestinationString, 0xAu, (PULONG)&Value) < 0 )
    return 0;
  if ( v10 )
  {
    v11 = (unsigned int)(v10 + 1);
    v12 = a1[v11];
    if ( v12 )
    {
      v13 = (unsigned int)(v10 + 2);
      do
      {
        if ( v12 == 59 && a1[v13] == 40 && a1[v2 - 1] == 41 )
          break;
        v11 = (unsigned int)(v11 + 1);
        v13 = (unsigned int)(v13 + 1);
        v12 = a1[v11];
      }
      while ( v12 );
    }
  }
  return 1;
}
