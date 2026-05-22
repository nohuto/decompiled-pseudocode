/*
 * XREFs of ?InternalParseValue@HidChannelValueInfo@@AEAAI_KPEBE@Z @ 0x1800F6944
 * Callers:
 *     ?ParseValue@HidChannelValueInfo@@QEAAJ_KPEBEPEAE@Z @ 0x1800F69BC (-ParseValue@HidChannelValueInfo@@QEAAJ_KPEBEPEAE@Z.c)
 *     ?ParseValue@HidChannelValueInfo@@QEAAJ_KPEBEPEAH@Z @ 0x1800F69F8 (-ParseValue@HidChannelValueInfo@@QEAAJ_KPEBEPEAH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HidChannelValueInfo::InternalParseValue(
        HidChannelValueInfo *this,
        unsigned __int64 a2,
        const unsigned __int8 *a3)
{
  unsigned __int64 v3; // rax
  const unsigned __int8 *v4; // rdx
  unsigned __int8 v5; // r8
  const unsigned __int8 *v6; // rdx
  unsigned __int64 v7; // rax

  v3 = *((unsigned int *)this + 12);
  if ( v3 >= a2 )
    return 0LL;
  v4 = a3 + 1;
  v5 = 1;
  v6 = &v4[v3];
  v7 = *v6;
  if ( *((_DWORD *)this + 10) > 1u )
  {
    do
    {
      --v6;
      ++v5;
      v7 = *v6 | (v7 << 8);
    }
    while ( (unsigned int)v5 < *((_DWORD *)this + 10) );
  }
  return *((_DWORD *)this + 13) & (unsigned int)(v7 >> *((_DWORD *)this + 11));
}
