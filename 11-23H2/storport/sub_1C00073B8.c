/*
 * XREFs of sub_1C00073B8 @ 0x1C00073B8
 * Callers:
 *     sub_1C0013434 @ 0x1C0013434 (sub_1C0013434.c)
 *     ?get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z @ 0x1C0016FE4 (-get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z.c)
 *     sub_1C0075020 @ 0x1C0075020 (sub_1C0075020.c)
 *     sub_1C00A0B3C @ 0x1C00A0B3C (sub_1C00A0B3C.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1C00073B8(__int64 a1, int a2)
{
  __int64 v3; // rax
  bool v4; // sf
  int v5; // edx
  _BYTE *v6; // rcx

  if ( a2 )
  {
    v3 = (unsigned int)(a2 - 1);
    v4 = a2 - 2 < 0;
    v5 = a2 - 2;
    *(_BYTE *)(v3 + a1) = 0;
    if ( !v4 )
    {
      v6 = (_BYTE *)(v5 + a1);
      do
      {
        if ( *v6 == 32 )
        {
          *v6 = 0;
        }
        else if ( *v6 )
        {
          break;
        }
        --v5;
        --v6;
      }
      while ( (__int64)&v6[-a1] >= 0 );
    }
    *(_BYTE *)(v5 + a1 + 1) = 0;
  }
}
