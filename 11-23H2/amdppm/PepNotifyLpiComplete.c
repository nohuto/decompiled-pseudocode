/*
 * XREFs of PepNotifyLpiComplete @ 0x1C000A590
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PepNotifyLpiComplete(__int64 *a1, __int64 a2, int a3, unsigned int a4, unsigned int *a5)
{
  __int64 result; // rax
  unsigned int v6; // edx
  unsigned int *v7; // r8
  __int64 v8; // rcx
  _DWORD v9[2]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v10; // [rsp+28h] [rbp-10h]

  result = 0LL;
  v9[1] = 0;
  if ( a3 != -1 )
  {
    v6 = 0;
    if ( a4 )
    {
      v7 = a5;
      do
      {
        if ( !*(_BYTE *)(56LL * *v7 + qword_1C0012B70 + 48) )
          break;
        ++v6;
        ++v7;
      }
      while ( v6 < a4 );
    }
    v8 = *a1;
    v9[0] = v6;
    v10 = (__int64)a5;
    return PoFxProcessorNotification(v8, 38LL, v9);
  }
  return result;
}
