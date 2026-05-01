/*
 * XREFs of ?ConvertColor@D2DUtil@@YA?AU_D3DCOLORVALUE@@KM@Z @ 0x180572D14
 * Callers:
 *     ?_RenderText@CSwitchItemElement@@IEAAJAEBUD2D_RECT_F@@PEAUID2D1DeviceContext@@@Z @ 0x1802E3708 (-_RenderText@CSwitchItemElement@@IEAAJAEBUD2D_RECT_F@@PEAUID2D1DeviceContext@@@Z.c)
 *     _lambda_5e9c18940e8e88d162ff7728dae26002_::operator() @ 0x18057C390 (_lambda_5e9c18940e8e88d162ff7728dae26002_--operator().c)
 *     _lambda_6388d5cf85f46d09280dec8197538f8a_::operator() @ 0x180582EEC (_lambda_6388d5cf85f46d09280dec8197538f8a_--operator().c)
 * Callees:
 *     <none>
 */

struct _D3DCOLORVALUE *__fastcall D2DUtil::ConvertColor(
        struct _D3DCOLORVALUE *this,
        struct _D3DCOLORVALUE *__return_ptr retstr,
        float a3,
        float a4)
{
  struct _D3DCOLORVALUE *result; // rax
  float v5[6]; // [rsp+0h] [rbp-18h]

  v5[3] = a3;
  v5[0] = (float)(((unsigned __int16)retstr & 0xFF00 | ((unsigned __int8)retstr << 16) | (unsigned int)BYTE2(retstr)) >> 16)
        / 255.0;
  v5[1] = (float)(unsigned __int8)((unsigned __int16)((unsigned __int16)retstr & 0xFF00) >> 8) / 255.0;
  result = this;
  v5[2] = (float)BYTE2(retstr) / 255.0;
  *(struct _D3DCOLORVALUE *)&this->r = *(struct _D3DCOLORVALUE *)v5;
  return result;
}
