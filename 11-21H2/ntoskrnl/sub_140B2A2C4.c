/*
 * XREFs of sub_140B2A2C4 @ 0x140B2A2C4
 * Callers:
 *     sub_140AFB264 @ 0x140AFB264 (sub_140AFB264.c)
 * Callees:
 *     <none>
 */

__int64 sub_140B2A2C4()
{
  ULONG v0; // r8d
  int v1; // r9d
  __int64 v2; // r10
  int v3; // eax
  unsigned int v4; // ecx

  v0 = DesiredTime % 0x2710;
  v1 = 0;
  v2 = 24LL;
  do
  {
    v3 = 2 * v1;
    v4 = 2 * v0;
    v1 = (2 * v1) | 1;
    v0 = 2 * v0 - 10000;
    if ( v4 < 0x2710 )
    {
      v1 = v3;
      v0 = v4;
    }
    --v2;
  }
  while ( v2 );
  return v1 | ((DesiredTime / 0x2710) << 24);
}
