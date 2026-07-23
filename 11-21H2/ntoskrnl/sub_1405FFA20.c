/*
 * XREFs of sub_1405FFA20 @ 0x1405FFA20
 * Callers:
 *     sub_140A82B0C @ 0x140A82B0C (sub_140A82B0C.c)
 *     sub_140A82E08 @ 0x140A82E08 (sub_140A82E08.c)
 *     sub_140A82EB0 @ 0x140A82EB0 (sub_140A82EB0.c)
 *     sub_140A82F58 @ 0x140A82F58 (sub_140A82F58.c)
 *     sub_140A83778 @ 0x140A83778 (sub_140A83778.c)
 *     sub_140A83888 @ 0x140A83888 (sub_140A83888.c)
 *     sub_140A83924 @ 0x140A83924 (sub_140A83924.c)
 *     sub_140A839B8 @ 0x140A839B8 (sub_140A839B8.c)
 *     sub_140A83A4C @ 0x140A83A4C (sub_140A83A4C.c)
 *     sub_140A83AE4 @ 0x140A83AE4 (sub_140A83AE4.c)
 *     sub_140A83B84 @ 0x140A83B84 (sub_140A83B84.c)
 *     sub_140A83C18 @ 0x140A83C18 (sub_140A83C18.c)
 *     sub_140A83CA4 @ 0x140A83CA4 (sub_140A83CA4.c)
 *     sub_140A83D24 @ 0x140A83D24 (sub_140A83D24.c)
 *     sub_140A84BC0 @ 0x140A84BC0 (sub_140A84BC0.c)
 *     sub_140A84F20 @ 0x140A84F20 (sub_140A84F20.c)
 *     sub_140A852B0 @ 0x140A852B0 (sub_140A852B0.c)
 *     sub_140A853A0 @ 0x140A853A0 (sub_140A853A0.c)
 *     sub_140A85DA0 @ 0x140A85DA0 (sub_140A85DA0.c)
 *     sub_140A86160 @ 0x140A86160 (sub_140A86160.c)
 *     sub_140A86510 @ 0x140A86510 (sub_140A86510.c)
 *     sub_140A866D0 @ 0x140A866D0 (sub_140A866D0.c)
 *     sub_140A868E0 @ 0x140A868E0 (sub_140A868E0.c)
 *     sub_140A874C8 @ 0x140A874C8 (sub_140A874C8.c)
 *     sub_140A8798C @ 0x140A8798C (sub_140A8798C.c)
 *     sub_140A87B3C @ 0x140A87B3C (sub_140A87B3C.c)
 *     sub_140A87DC8 @ 0x140A87DC8 (sub_140A87DC8.c)
 *     sub_140A87EFC @ 0x140A87EFC (sub_140A87EFC.c)
 *     sub_140A88430 @ 0x140A88430 (sub_140A88430.c)
 *     sub_140A88624 @ 0x140A88624 (sub_140A88624.c)
 *     sub_140A88738 @ 0x140A88738 (sub_140A88738.c)
 *     sub_140A88D98 @ 0x140A88D98 (sub_140A88D98.c)
 *     sub_140A89224 @ 0x140A89224 (sub_140A89224.c)
 *     sub_140A97900 @ 0x140A97900 (sub_140A97900.c)
 *     sub_140A985B4 @ 0x140A985B4 (sub_140A985B4.c)
 *     sub_140A98ACC @ 0x140A98ACC (sub_140A98ACC.c)
 *     sub_140A98E28 @ 0x140A98E28 (sub_140A98E28.c)
 *     sub_140A99C74 @ 0x140A99C74 (sub_140A99C74.c)
 *     sub_140A99E14 @ 0x140A99E14 (sub_140A99E14.c)
 * Callees:
 *     DbgPrompt @ 0x1405E4170 (DbgPrompt.c)
 *     sub_1405FDF9C @ 0x1405FDF9C (sub_1405FDF9C.c)
 *     sub_140A8C924 @ 0x140A8C924 (sub_140A8C924.c)
 *     sub_140A92B64 @ 0x140A92B64 (sub_140A92B64.c)
 *     sub_140A92C94 @ 0x140A92C94 (sub_140A92C94.c)
 */

void __fastcall sub_1405FFA20(ULONG a1, ULONG_PTR a2, ULONG_PTR a3, ULONG_PTR a4, ULONG_PTR a5, _DWORD *Response)
{
  _DWORD *v6; // rbx
  int v7; // edi
  int v8; // esi
  int v10; // ebp
  int v11; // r10d

  v6 = Response;
  v7 = a4;
  v8 = a3;
  v10 = a2;
  v11 = *Response;
  if ( *Response && (v11 & 2) == 0 )
  {
    if ( (((v11 & 8) == 0) & !_bittest(&dword_140C1AA7C, 9u)) != 0 && (_BYTE)KdDebuggerEnabled )
    {
      if ( (v11 & 4) != 0 )
      {
        while ( 1 )
        {
          sub_1405FDF9C("\n*** Verifier assertion failed ***\n");
          DbgPrompt("(B)reak, (I)gnore, (W)arn only, (R)emove assert? ", (PCH)&Response, 2u);
          switch ( (_BYTE)Response )
          {
            case 'B':
              goto LABEL_15;
            case 'I':
              return;
            case 'R':
              goto LABEL_16;
            case 'W':
              goto LABEL_14;
            case 'b':
LABEL_15:
              sub_140A92C94(a1, v10, v8, v7, a5);
              __debugbreak();
            case 'i':
              return;
          }
          if ( (_BYTE)Response == 114 )
            break;
          if ( (_BYTE)Response == 119 )
          {
LABEL_14:
            *v6 = 2;
            return;
          }
        }
LABEL_16:
        *v6 = 0;
      }
    }
    else
    {
      sub_140A8C924(a1, a2, a3, a4, a5);
    }
  }
}
