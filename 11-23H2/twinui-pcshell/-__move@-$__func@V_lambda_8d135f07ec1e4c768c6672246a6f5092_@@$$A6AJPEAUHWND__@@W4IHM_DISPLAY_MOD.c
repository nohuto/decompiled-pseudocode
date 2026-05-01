/*
 * XREFs of ?__move@?$__func@V_lambda_8d135f07ec1e4c768c6672246a6f5092_@@$$A6AJPEAUHWND__@@W4IHM_DISPLAY_MODE@@@Z@__function@wistd@@UEAAXPEAV?$__base@$$A6AJPEAUHWND__@@W4IHM_DISPLAY_MODE@@@Z@23@@Z @ 0x18046BA70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall wistd::__function::__func<_lambda_8d135f07ec1e4c768c6672246a6f5092_,long (HWND__ *,enum IHM_DISPLAY_MODE)>::__move(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rcx
  _QWORD *v3; // rdx
  __int64 result; // rax

  v2 = a1 + 8;
  *a2 = &wistd::__function::__func<_lambda_8d135f07ec1e4c768c6672246a6f5092_,long (HWND__ *,enum IHM_DISPLAY_MODE)>::`vftable';
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
