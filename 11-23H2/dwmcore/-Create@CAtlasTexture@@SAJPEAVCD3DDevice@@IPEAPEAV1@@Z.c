/*
 * XREFs of ?Create@CAtlasTexture@@SAJPEAVCD3DDevice@@IPEAPEAV1@@Z @ 0x1800241BC
 * Callers:
 *     ?AllocateGradientStrip@CAtlasManager@@QEAAJPEAVCAtlasEntry@@@Z @ 0x1800A5744 (-AllocateGradientStrip@CAtlasManager@@QEAAJPEAVCAtlasEntry@@@Z.c)
 *     ?CompactSingleAtlas@CAtlasManager@@AEAAJPEA_N@Z @ 0x1800F367C (-CompactSingleAtlas@CAtlasManager@@AEAAJPEA_N@Z.c)
 * Callees:
 *     ??1CAtlasTexture@@QEAA@XZ @ 0x180018278 (--1CAtlasTexture@@QEAA@XZ.c)
 *     ?Initialize@CAtlasTexture@@AEAAJPEAVCD3DDevice@@I@Z @ 0x18002424C (-Initialize@CAtlasTexture@@AEAAJPEAVCD3DDevice@@I@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18002E72C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010F3C8 (--3@YAXPEAX_K@Z.c)
 */

__int64 __fastcall CAtlasTexture::Create(struct CD3DDevice *a1, unsigned int a2, struct CAtlasTexture **a3)
{
  CAtlasTexture *v6; // rax
  unsigned int v7; // ecx
  CAtlasTexture *v8; // rbx
  int v9; // eax
  unsigned int v10; // ecx
  unsigned int v11; // edi

  v6 = (CAtlasTexture *)DefaultHeap::Alloc(0x28uLL);
  v8 = v6;
  if ( v6 )
  {
    *((_DWORD *)v6 + 9) = 0;
    *((_DWORD *)v6 + 6) = 0;
    *((_DWORD *)v6 + 7) = 0;
    *((_DWORD *)v6 + 8) = 0;
    *(_QWORD *)v6 = &CAtlasTexture::`vftable';
    *((_QWORD *)v6 + 1) = 0LL;
    *((_QWORD *)v6 + 2) = 0LL;
    v9 = CAtlasTexture::Initialize(v6, a1, a2);
    v11 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x19u, 0LL);
      CAtlasTexture::~CAtlasTexture(v8);
      operator delete(v8, 0x28uLL);
    }
    else
    {
      *a3 = v8;
    }
  }
  else
  {
    v11 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2147024882, 0x17u, 0LL);
  }
  return v11;
}
