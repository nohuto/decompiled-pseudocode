/*
 * XREFs of ?GetActiveSize@DeviceFrameBuffer@Engine@Spectre@@UEBA?AUVector2@Math@Utils@3@XZ @ 0x180028900
 * Callers:
 *     <none>
 * Callees:
 *     ?GetActiveSize@DeviceTexture@Engine@Spectre@@QEBA?AUVector2@Math@Utils@3@XZ @ 0x180056600 (-GetActiveSize@DeviceTexture@Engine@Spectre@@QEBA-AUVector2@Math@Utils@3@XZ.c)
 */

_QWORD *__fastcall Spectre::Engine::DeviceFrameBuffer::GetActiveSize(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rcx
  _QWORD *v3; // r8
  __int64 *ActiveSize; // rax
  __int64 v5; // xmm0_8
  _QWORD *result; // rax
  int v7; // [rsp+30h] [rbp+8h] BYREF
  int v8; // [rsp+34h] [rbp+Ch]

  v2 = *(_QWORD *)(a1 + 96);
  v3 = a2;
  if ( v2 )
  {
    ActiveSize = (__int64 *)Spectre::Engine::DeviceTexture::GetActiveSize(v2, &v7, a2);
  }
  else
  {
    v7 = 0;
    ActiveSize = (__int64 *)&v7;
    v8 = 0;
  }
  v5 = *ActiveSize;
  result = v3;
  *v3 = v5;
  return result;
}
