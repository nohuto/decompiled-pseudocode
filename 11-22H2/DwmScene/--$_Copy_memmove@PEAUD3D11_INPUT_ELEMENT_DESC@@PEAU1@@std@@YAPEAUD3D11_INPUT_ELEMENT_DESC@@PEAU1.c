/*
 * XREFs of ??$_Copy_memmove@PEAUD3D11_INPUT_ELEMENT_DESC@@PEAU1@@std@@YAPEAUD3D11_INPUT_ELEMENT_DESC@@PEAU1@00@Z @ 0x1800D3834
 * Callers:
 *     ??$_Uninitialized_move@PEAUD3D11_INPUT_ELEMENT_DESC@@V?$allocator@UD3D11_INPUT_ELEMENT_DESC@@@std@@@std@@YAPEAUD3D11_INPUT_ELEMENT_DESC@@QEAU1@0PEAU1@AEAV?$allocator@UD3D11_INPUT_ELEMENT_DESC@@@0@@Z @ 0x1800D3980 (--$_Uninitialized_move@PEAUD3D11_INPUT_ELEMENT_DESC@@V-$allocator@UD3D11_INPUT_ELEMENT_DESC@@@st.c)
 * Callees:
 *     memmove_0 @ 0x18000CA85 (memmove_0.c)
 */

__int64 __fastcall std::_Copy_memmove<D3D11_INPUT_ELEMENT_DESC *,D3D11_INPUT_ELEMENT_DESC *>(
        void *Src,
        __int64 a2,
        void *a3)
{
  __int64 v4; // rbx

  v4 = a2 - (_QWORD)Src;
  memmove_0(a3, Src, a2 - (_QWORD)Src);
  return (__int64)a3 + v4;
}
