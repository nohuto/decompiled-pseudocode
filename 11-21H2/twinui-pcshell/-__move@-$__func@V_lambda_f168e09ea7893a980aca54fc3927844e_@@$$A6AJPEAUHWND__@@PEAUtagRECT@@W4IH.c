/*
 * XREFs of ?__move@?$__func@V_lambda_f168e09ea7893a980aca54fc3927844e_@@$$A6AJPEAUHWND__@@PEAUtagRECT@@W4IHM_DISPLAY_MODE@@11@Z@__function@wistd@@UEAAXPEAV?$__base@$$A6AJPEAUHWND__@@PEAUtagRECT@@W4IHM_DISPLAY_MODE@@11@Z@23@@Z @ 0x1803900F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall wistd::__function::__func<_lambda_f168e09ea7893a980aca54fc3927844e_,long (HWND__ *,tagRECT *,enum IHM_DISPLAY_MODE,tagRECT *,tagRECT *)>::__move(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rcx
  _QWORD *v3; // rdx
  __int64 result; // rax

  v2 = a1 + 8;
  *a2 = &wistd::__function::__func<_lambda_f168e09ea7893a980aca54fc3927844e_,long (HWND__ *,tagRECT *,enum IHM_DISPLAY_MODE,tagRECT *,tagRECT *)>::`vftable';
  v3 = a2 + 1;
  *v3 = 0LL;
  if ( v3 != (_QWORD *)v2 )
  {
    *v3 = *(_QWORD *)v2;
    *(_QWORD *)v2 = 0LL;
  }
  result = *(_QWORD *)(v2 + 8);
  v3[1] = result;
  *((_OWORD *)v3 + 1) = *(_OWORD *)(v2 + 16);
  return result;
}
