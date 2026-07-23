/*
 * XREFs of sub_1402A34C8 @ 0x1402A34C8
 * Callers:
 *     sub_140280170 @ 0x140280170 (sub_140280170.c)
 *     sub_140559124 @ 0x140559124 (sub_140559124.c)
 *     sub_14071CAFC @ 0x14071CAFC (sub_14071CAFC.c)
 *     sub_14072B8B0 @ 0x14072B8B0 (sub_14072B8B0.c)
 *     sub_1407308F0 @ 0x1407308F0 (sub_1407308F0.c)
 *     IoSetFileObjectIgnoreSharing @ 0x140881730 (IoSetFileObjectIgnoreSharing.c)
 *     IoRegisterContainerNotification @ 0x140937220 (IoRegisterContainerNotification.c)
 * Callees:
 *     sub_1402A3A60 @ 0x1402A3A60 (sub_1402A3A60.c)
 */

__int64 __fastcall sub_1402A34C8(__int64 a1, int a2, char a3)
{
  __int64 result; // rax
  _DWORD *v5; // rax
  _DWORD *v6; // [rsp+48h] [rbp+20h] BYREF

  v6 = 0LL;
  if ( a3 )
  {
    result = sub_1402A3A60(a1, &v6);
    if ( (int)result < 0 )
      return result;
    v5 = v6;
  }
  else
  {
    v5 = *(_DWORD **)(a1 + 208);
    if ( !v5 )
      return 3221226021LL;
  }
  *v5 |= a2;
  return 0LL;
}
