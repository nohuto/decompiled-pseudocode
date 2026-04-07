/*
 * XREFs of ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x180045F74
 * Callers:
 *     ?BuildFeedbackString@CContactManager@@IEAAJKPEAGI@Z @ 0x1800AA74C (-BuildFeedbackString@CContactManager@@IEAAJKPEAGI@Z.c)
 * Callees:
 *     StringCopyWorkerW @ 0x1800465D0 (StringCopyWorkerW.c)
 */

HRESULT __fastcall StringCchCatW(unsigned __int16 *a1, __int64 a2, const unsigned __int16 *a3)
{
  __int64 v4; // r9
  unsigned __int16 *v5; // rax
  __int64 v6; // r8
  HRESULT result; // eax
  size_t v8; // [rsp+20h] [rbp-18h]

  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
    return -2147024809;
  v4 = a2;
  v5 = a1;
  do
  {
    if ( !*v5 )
      break;
    ++v5;
    --v4;
  }
  while ( v4 );
  result = v4 == 0 ? 0x80070057 : 0;
  if ( v4 )
  {
    v6 = (a2 - v4) & -(__int64)(v4 != 0);
    return StringCopyWorkerW(&a1[v6], a2 - v6, (size_t *)v6, a3, v8);
  }
  return result;
}
