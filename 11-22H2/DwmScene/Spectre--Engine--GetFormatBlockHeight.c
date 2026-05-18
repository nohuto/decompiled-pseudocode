/*
 * XREFs of Spectre::Engine::GetFormatBlockHeight @ 0x1800D0580
 * Callers:
 *     ?SubmitReadTexture@CommandListD3D11@D3D11@Engine@Spectre@@MEAA_NAEBV?$shared_ptr@VTexture@Engine@Spectre@@@std@@PEAXI@Z @ 0x1800D1170 (-SubmitReadTexture@CommandListD3D11@D3D11@Engine@Spectre@@MEAA_NAEBV-$shared_ptr@VTexture@Engine.c)
 *     ?SubmitUpdateTexture@CommandListD3D11@D3D11@Engine@Spectre@@MEAA_NAEBV?$shared_ptr@VTexture@Engine@Spectre@@@std@@PEBXI@Z @ 0x1800D2F50 (-SubmitUpdateTexture@CommandListD3D11@D3D11@Engine@Spectre@@MEAA_NAEBV-$shared_ptr@VTexture@Engi.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 */

__int64 __fastcall Spectre::Engine::GetFormatBlockHeight(unsigned int a1)
{
  char *v1; // rdi
  __int64 v2; // rdx
  __int64 i; // rcx
  _DWORD v5[2]; // [rsp+0h] [rbp-88h]
  char v6; // [rsp+8h] [rbp-80h] BYREF
  int v7; // [rsp+58h] [rbp-30h]
  int v8; // [rsp+5Ch] [rbp-2Ch]
  int v9; // [rsp+60h] [rbp-28h]

  v5[0] = 0;
  v1 = &v6;
  v2 = a1;
  v5[1] = 1;
  for ( i = 20LL; i; --i )
  {
    *(_DWORD *)v1 = 1;
    v1 += 4;
  }
  v7 = 4;
  v8 = 1;
  v9 = 1;
  return (unsigned int)v5[v2];
}
