/*
 * XREFs of ??4?$Optional@UScissorRect@Engine@Spectre@@@Utils@Spectre@@QEAAAEAV012@V012@@Z @ 0x180059B20
 * Callers:
 *     ?CloneInternal@Camera@Engine@Spectre@@MEBAXV?$shared_ptr@VComponent@Engine@Spectre@@@std@@AEBI@Z @ 0x18005AED0 (-CloneInternal@Camera@Engine@Spectre@@MEBAXV-$shared_ptr@VComponent@Engine@Spectre@@@std@@AEBI@Z.c)
 * Callees:
 *     <none>
 */

__int128 *__fastcall Spectre::Utils::Optional<Spectre::Engine::ScissorRect>::operator=(__int128 *a1, __int128 *a2)
{
  char v2; // al
  __int128 v3; // xmm1
  __int128 v4; // xmm0
  __int128 v5; // xmm0

  v2 = *((_BYTE *)a1 + 16);
  if ( *((_BYTE *)a2 + 16) )
  {
    if ( v2 )
    {
      v3 = *a2;
      *a2 = *a1;
      *a1 = v3;
    }
    else
    {
      v4 = *a2;
      *((_BYTE *)a1 + 16) = 1;
      *a1 = v4;
      if ( !*((_BYTE *)a2 + 16) )
        return a1;
      *((_BYTE *)a2 + 16) = 0;
    }
  }
  else if ( v2 )
  {
    v5 = *a1;
    *((_BYTE *)a2 + 16) = 1;
    *a2 = v5;
    if ( *((_BYTE *)a1 + 16) )
      *((_BYTE *)a1 + 16) = 0;
  }
  if ( *((_BYTE *)a2 + 16) )
    *((_BYTE *)a2 + 16) = 0;
  return a1;
}
