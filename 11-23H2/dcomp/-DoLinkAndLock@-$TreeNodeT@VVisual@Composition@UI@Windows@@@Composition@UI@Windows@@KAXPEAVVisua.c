/*
 * XREFs of ?DoLinkAndLock@?$TreeNodeT@VVisual@Composition@UI@Windows@@@Composition@UI@Windows@@KAXPEAVVisual@234@00_N@Z @ 0x180061F2C
 * Callers:
 *     ?InsertChild@Visual@Composition@UI@Windows@@QEAAJPEAV1234@_N0@Z @ 0x180061E08 (-InsertChild@Visual@Composition@UI@Windows@@QEAAJPEAV1234@_N0@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::UI::Composition::TreeNodeT<Windows::UI::Composition::Visual>::DoLinkAndLock(
        __int64 a1,
        Microsoft::WRL2::NestableRuntimeClass *a2,
        __int64 a3,
        char a4)
{
  __int64 v4; // r10
  __int64 v5; // rax
  __int64 v7; // rax

  *((_QWORD *)a2 + 17) = a1;
  v4 = *(_QWORD *)(a1 + 144);
  if ( !v4 )
    goto LABEL_8;
  if ( !a4 )
  {
    if ( !a3 )
    {
      v7 = *(_QWORD *)(v4 + 160);
      *(_QWORD *)(v7 + 152) = a2;
      *(_QWORD *)(v4 + 160) = a2;
      *((_QWORD *)a2 + 20) = v7;
      return Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(a2);
    }
    *((_QWORD *)a2 + 19) = a3;
    *((_QWORD *)a2 + 20) = *(_QWORD *)(a3 + 160);
    *(_QWORD *)(a3 + 160) = a2;
    if ( a3 != *(_QWORD *)(a1 + 144) )
    {
      *(_QWORD *)(*((_QWORD *)a2 + 20) + 152LL) = a2;
      return Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(a2);
    }
    goto LABEL_8;
  }
  if ( !a3 )
  {
    *((_QWORD *)a2 + 19) = v4;
    *((_QWORD *)a2 + 20) = *(_QWORD *)(v4 + 160);
    *(_QWORD *)(v4 + 160) = a2;
LABEL_8:
    *(_QWORD *)(a1 + 144) = a2;
    return Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(a2);
  }
  v5 = *(_QWORD *)(a3 + 152);
  if ( v5 )
  {
    *(_QWORD *)(v5 + 160) = a2;
    *((_QWORD *)a2 + 19) = *(_QWORD *)(a3 + 152);
  }
  else
  {
    *(_QWORD *)(v4 + 160) = a2;
  }
  *((_QWORD *)a2 + 20) = a3;
  *(_QWORD *)(a3 + 152) = a2;
  return Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(a2);
}
