/*
 * XREFs of ??_GCProjectedShadowRenderingEffect@@EEAAPEAXI@Z @ 0x180208AE0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180042C34 (--3@YAXPEAX@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCCommonRenderingEffect@@@Z @ 0x1800C33E0 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCCommonRenderingEffect@@@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x180104CD8 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180105114 (-__global_delete@@YAXPEAX_K@Z.c)
 */

CProjectedShadowRenderingEffect *__fastcall CProjectedShadowRenderingEffect::`scalar deleting destructor'(
        CProjectedShadowRenderingEffect *this,
        char a2)
{
  struct CCommonRenderingEffect *v4; // rcx
  struct CObjectCache *ObjectCache; // rax

  `vector destructor iterator'(
    (char *)this + 16,
    24LL,
    2LL,
    (void (__fastcall *)(char *))CDrawListBitmap::~CDrawListBitmap);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
    {
      __global_delete(this);
    }
    else
    {
      ObjectCache = CThreadContext::GetObjectCache(v4);
      if ( *((_DWORD *)ObjectCache + 1) >= *(_DWORD *)ObjectCache )
      {
        operator delete(this);
      }
      else
      {
        *(_QWORD *)this = *((_QWORD *)ObjectCache + 1);
        ++*((_DWORD *)ObjectCache + 1);
        *((_QWORD *)ObjectCache + 1) = this;
      }
    }
  }
  return this;
}
