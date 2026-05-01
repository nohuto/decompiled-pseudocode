/*
 * XREFs of sub_1802CF348 @ 0x1802CF348
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
int __fastcall sub_1802CF348(
        CApplicationManager *a1,
        __int64 a2,
        unsigned int a3,
        unsigned int *a4,
        struct tagRECT *a5,
        unsigned int a6)
{
  char v6; // of
  _BYTE *v7; // rbx
  HWND v9; // [rsp-8h] [rbp-8h]

  if ( !v6 )
    JUMPOUT(0x1802CF3BALL);
  if ( ((*v7 ^ (unsigned __int8)v7) & 0x80u) != 0 )
    JUMPOUT(0x1802CF30ELL);
  return CApplicationManager::OnShowWindowPolicy(a1, v9, a3, a4, a5, a6);
}
