/*
 * XREFs of ?RemoveDeferredCallback@CompositionGraphicsDevice@Composition@UI@Windows@@AEAAXXZ @ 0x18008B138
 * Callers:
 *     ?Destroy@CompositionGraphicsDevice@Composition@UI@Windows@@UEAAXXZ @ 0x18008B080 (-Destroy@CompositionGraphicsDevice@Composition@UI@Windows@@UEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     memmove_0 @ 0x1800A8138 (memmove_0.c)
 */

void __fastcall Windows::UI::Composition::CompositionGraphicsDevice::RemoveDeferredCallback(
        Windows::UI::Composition::CompositionGraphicsDevice *this)
{
  _QWORD *v1; // rbx
  unsigned __int64 v2; // rdx
  bool v4; // cf
  _QWORD *v5; // rcx
  __int64 v6; // rsi
  _QWORD *v7; // rcx
  Microsoft::WRL2::NestableRuntimeClass *v8; // rcx
  _BYTE *v9; // r8
  _BYTE *v10; // rdx
  _BYTE *v11; // r8
  _BYTE *v12; // rdx

  v1 = (_QWORD *)*((_QWORD *)this + 3);
  v2 = (unsigned __int64)this + 128;
  v4 = this != 0LL;
  v5 = (_QWORD *)v1[115];
  v6 = v2 & -(__int64)v4;
  if ( ((v1[116] - (_QWORD)v5) & 0xFFFFFFFFFFFFFFF8uLL) != 0 )
  {
    v9 = (_BYTE *)v1[116];
    if ( v5 != (_QWORD *)v9 )
    {
      while ( 1 )
      {
        v10 = v5 + 1;
        if ( *v5 == v6 )
          break;
        ++v5;
        if ( v10 == v9 )
          goto LABEL_2;
      }
      memmove_0(v5, v10, v9 - v10);
      v1[116] -= 8LL;
    }
  }
LABEL_2:
  v7 = (_QWORD *)v1[118];
  if ( ((v1[119] - (_QWORD)v7) & 0xFFFFFFFFFFFFFFF8uLL) != 0 )
  {
    v11 = (_BYTE *)v1[119];
    if ( v7 != (_QWORD *)v11 )
    {
      while ( 1 )
      {
        v12 = v7 + 1;
        if ( *v7 == v6 )
          break;
        ++v7;
        if ( v12 == v11 )
          goto LABEL_3;
      }
      memmove_0(v7, v12, v11 - v12);
      v1[119] -= 8LL;
    }
  }
LABEL_3:
  v8 = (Microsoft::WRL2::NestableRuntimeClass *)*((_QWORD *)this + 32);
  if ( v8 )
  {
    *((_QWORD *)this + 32) = 0LL;
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v8);
  }
}
