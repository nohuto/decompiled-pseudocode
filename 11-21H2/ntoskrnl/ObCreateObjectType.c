/*
 * XREFs of ObCreateObjectType @ 0x140824B10
 * Callers:
 *     sub_140AFD20C @ 0x140AFD20C (sub_140AFD20C.c)
 *     sub_140AFD554 @ 0x140AFD554 (sub_140AFD554.c)
 *     sub_140AFD7A4 @ 0x140AFD7A4 (sub_140AFD7A4.c)
 *     sub_140AFE184 @ 0x140AFE184 (sub_140AFE184.c)
 *     sub_140AFF540 @ 0x140AFF540 (sub_140AFF540.c)
 *     sub_140AFF6B0 @ 0x140AFF6B0 (sub_140AFF6B0.c)
 *     sub_140B08D58 @ 0x140B08D58 (sub_140B08D58.c)
 *     sub_140B09078 @ 0x140B09078 (sub_140B09078.c)
 *     sub_140B1DB9C @ 0x140B1DB9C (sub_140B1DB9C.c)
 *     sub_140B1F300 @ 0x140B1F300 (sub_140B1F300.c)
 *     sub_140B22DD4 @ 0x140B22DD4 (sub_140B22DD4.c)
 *     sub_140B23400 @ 0x140B23400 (sub_140B23400.c)
 *     sub_140B248EC @ 0x140B248EC (sub_140B248EC.c)
 *     sub_140B27E7C @ 0x140B27E7C (sub_140B27E7C.c)
 *     sub_140B28EB0 @ 0x140B28EB0 (sub_140B28EB0.c)
 *     sub_140B2A324 @ 0x140B2A324 (sub_140B2A324.c)
 *     sub_140B2DEA8 @ 0x140B2DEA8 (sub_140B2DEA8.c)
 *     sub_140B2F410 @ 0x140B2F410 (sub_140B2F410.c)
 *     sub_140B2F564 @ 0x140B2F564 (sub_140B2F564.c)
 *     sub_140B2F824 @ 0x140B2F824 (sub_140B2F824.c)
 *     sub_140B2FABC @ 0x140B2FABC (sub_140B2FABC.c)
 *     sub_140B2FC64 @ 0x140B2FC64 (sub_140B2FC64.c)
 *     sub_140B304E0 @ 0x140B304E0 (sub_140B304E0.c)
 *     sub_140B30628 @ 0x140B30628 (sub_140B30628.c)
 *     sub_140B306CC @ 0x140B306CC (sub_140B306CC.c)
 *     sub_140B30970 @ 0x140B30970 (sub_140B30970.c)
 * Callees:
 *     ObCreateObjectTypeEx @ 0x140824B30 (ObCreateObjectTypeEx.c)
 */

__int64 __fastcall ObCreateObjectType(const UNICODE_STRING *a1, __int64 a2, __int64 a3, __int64 a4)
{
  return ObCreateObjectTypeEx(a1, a4);
}
