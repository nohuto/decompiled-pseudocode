/*
 * XREFs of UpdateAsyncKeyState @ 0x1C003E060
 * Callers:
 *     xxxUpdateGlobalsAndSendKeyEvent @ 0x1C003DC00 (xxxUpdateGlobalsAndSendKeyEvent.c)
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C0040FFC (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     ?ApplyKeyStateUpdate@@YAXE_N@Z @ 0x1C01EC470 (-ApplyKeyStateUpdate@@YAXE_N@Z.c)
 * Callees:
 *     ApiSetEditionUpdateAsyncKeyStateThreads @ 0x1C003E130 (ApiSetEditionUpdateAsyncKeyStateThreads.c)
 *     PostUpdateKeyStateEvent @ 0x1C0089B30 (PostUpdateKeyStateEvent.c)
 */

__int64 __fastcall UpdateAsyncKeyState(__int64 a1, unsigned __int8 a2, char a3)
{
  unsigned __int64 v3; // rdi
  _BYTE *v6; // rdx
  int v7; // r8d
  int v8; // ecx
  unsigned int v9; // r9d
  int v10; // eax
  unsigned __int8 v12; // cf
  unsigned int v13; // r8d

  v3 = a2;
  if ( a1 && (*(_DWORD *)(a1 + 388) & 1) != 0 )
    PostUpdateKeyStateEvent();
  v6 = (char *)&gafAsyncKeyState + (v3 >> 2);
  v7 = v3 & 3;
  v8 = (unsigned __int8)*v6;
  v9 = 2 * v7;
  if ( a3 )
  {
    v10 = v8 & ~(1 << v9);
  }
  else
  {
    v12 = _bittest(&v8, v9);
    *((_BYTE *)&gafAsyncKeyStateRecentDown + (v3 >> 3)) |= 1 << (v3 & 7);
    if ( !v12 )
    {
      v13 = 2 * v7 + 1;
      if ( _bittest(&v8, v13) )
        v8 &= ~(1 << v13);
      else
        LOBYTE(v8) = v8 | (1 << v13);
    }
    v10 = (unsigned __int8)v8 | (1 << v9);
  }
  *v6 = v10;
  LOBYTE(v6) = v3;
  return ApiSetEditionUpdateAsyncKeyStateThreads(a1, v6);
}
