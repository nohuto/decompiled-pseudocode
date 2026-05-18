/*
 * XREFs of ?RenderSymbols@Camera@Engine@Spectre@@MEBAXAEBV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@_KAEBV?$shared_ptr@$$CBVCamera@Engine@Spectre@@@5@@Z @ 0x18005CA50
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x18002945C (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?GetCameraFrustumCorner@Engine@Spectre@@YA?AUVector3@Math@Utils@2@H@Z @ 0x18005B9D8 (-GetCameraFrustumCorner@Engine@Spectre@@YA-AUVector3@Math@Utils@2@H@Z.c)
 *     ?TransformPoint@Camera@Engine@Spectre@@QEBA?AUVector3@Math@Utils@3@U4563@W4CoordinateSystem@23@1@Z @ 0x18005D694 (-TransformPoint@Camera@Engine@Spectre@@QEBA-AUVector3@Math@Utils@3@U4563@W4CoordinateSystem@23@1.c)
 *     ?RenderSymbolLine3D@Component@Engine@Spectre@@IEBAXUVector3@Math@Utils@3@0UColor@563@1M@Z @ 0x1800814B8 (-RenderSymbolLine3D@Component@Engine@Spectre@@IEBAXUVector3@Math@Utils@3@0UColor@563@1M@Z.c)
 */

__int64 __fastcall Spectre::Engine::Camera::RenderSymbols(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 result; // rax
  int v6; // ecx
  int v7; // r9d
  _DWORD *CameraFrustumCorner; // rax
  int v9; // r9d
  _DWORD *v10; // r8
  char *v11; // rbx
  int v12; // eax
  _DWORD *v13; // rax
  __int128 v14; // [rsp+30h] [rbp-A8h] BYREF
  __int128 v15; // [rsp+40h] [rbp-98h] BYREF
  char v16[8]; // [rsp+50h] [rbp-88h] BYREF
  __int64 v17; // [rsp+B0h] [rbp-28h] BYREF

  result = *a4;
  v6 = *(_DWORD *)(*a4 + 440);
  if ( (v6 & 0x10000) != 0 && (v6 & 0x100000) != 0 && result != a1 )
  {
    `vector constructor iterator'(v16, 12LL, 8LL, (void (__fastcall *)(char *))Spectre::Utils::Math::Vector3::Vector3);
    v7 = 0;
    do
    {
      CameraFrustumCorner = (_DWORD *)Spectre::Engine::GetCameraFrustumCorner((__int64)&v14, v7);
      v7 = v9 + 1;
      *(v10 - 2) = *CameraFrustumCorner;
      *(v10 - 1) = CameraFrustumCorner[1];
      *v10 = CameraFrustumCorner[2];
    }
    while ( v7 < 8 );
    v11 = v16;
    do
    {
      v12 = *((_DWORD *)v11 + 2);
      *(_QWORD *)&v14 = *(_QWORD *)v11;
      DWORD2(v14) = v12;
      v13 = (_DWORD *)Spectre::Engine::Camera::TransformPoint(a1, &v15, &v14);
      *(_DWORD *)v11 = *v13;
      *((_DWORD *)v11 + 1) = v13[1];
      *((_DWORD *)v11 + 2) = v13[2];
      v11 += 12;
    }
    while ( v11 != (char *)&v17 );
    v15 = _xmm;
    v14 = _xmm;
    Spectre::Engine::Component::RenderSymbolLine3D(a1);
  }
  return result;
}
