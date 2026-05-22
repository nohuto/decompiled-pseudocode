/*
 * XREFs of ?TryReadProperty@CFlipPropertySet@Flip@@UEAAJAEBU_GUID@@IPEAPEAX@Z @ 0x1801ACA50
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 */

__int64 __fastcall Flip::CFlipPropertySet::TryReadProperty(
        Flip::CFlipPropertySet *this,
        const struct _GUID *a2,
        int a3,
        void **a4)
{
  char *v4; // rax
  unsigned int v6; // ebx
  char *v7; // r10
  _DWORD *v8; // rcx
  __int64 v9; // rdx

  v4 = (char *)*((_QWORD *)this + 1);
  v6 = -2147024809;
  v7 = &v4[*((unsigned int *)this + 4)];
  while ( 1 )
  {
    if ( v4 >= v7 )
    {
      DoStackCaptureDirect(-2147024809, 0x2Bu);
      return v6;
    }
    v8 = v4 + 16;
    v9 = *(_QWORD *)v4 - *(_QWORD *)&a2->Data1;
    if ( *(_QWORD *)v4 == *(_QWORD *)&a2->Data1 )
      v9 = *((_QWORD *)v4 + 1) - *(_QWORD *)a2->Data4;
    if ( !v9 && *v8 == a3 )
      break;
    v4 = (char *)v8 + (unsigned int)*v8 + 4;
  }
  v6 = 0;
  *a4 = v4 + 20;
  return v6;
}
