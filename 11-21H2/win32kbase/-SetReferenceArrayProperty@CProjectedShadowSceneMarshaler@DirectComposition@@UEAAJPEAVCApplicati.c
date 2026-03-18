/*
 * XREFs of ?SetReferenceArrayProperty@CProjectedShadowSceneMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1C00061D0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResourceMarshalers@CPrimitiveGroupMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@PEAPEAVCResourceMarshaler@2@AEAI@Z @ 0x1C00063D4 (-ReleaseResourceMarshalers@CPrimitiveGroupMarshaler@DirectComposition@@AEAAXPEAVCApplicationChan.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ @ 0x1C00DD43C (-AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CProjectedShadowSceneMarshaler::SetReferenceArrayProperty(
        DirectComposition::CProjectedShadowSceneMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler **a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // ebx
  int v10; // edi
  unsigned int v11; // esi
  struct DirectComposition::CResourceMarshaler **v12; // r8
  __int64 v13; // rcx
  __int64 v14; // r12
  unsigned int *v15; // rsi
  __int64 v16; // rax
  struct DirectComposition::CResourceMarshaler *v18; // rcx
  struct DirectComposition::CResourceMarshaler *v19; // rcx
  int v21; // [rsp+70h] [rbp+18h]

  v6 = 0;
  v10 = 0;
  *a6 = 0;
  if ( a3 != 8 && a3 != 1 || a5 && !a4 )
    v10 = -1073741811;
  v11 = 0;
  if ( a3 == 1 )
  {
    if ( v10 >= 0 )
    {
      while ( 1 )
      {
        if ( v11 >= a5 )
        {
          v12 = (struct DirectComposition::CResourceMarshaler **)*((_QWORD *)this + 10);
          v13 = 88LL;
          v21 = 128;
          v14 = 92LL;
          goto LABEL_7;
        }
        v18 = a4[v11];
        if ( !v18
          || !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)v18 + 96LL))(
                v18,
                129LL) )
        {
          return (unsigned int)-1073741811;
        }
        ++v11;
      }
    }
  }
  else if ( v10 >= 0 )
  {
    while ( v11 < a5 )
    {
      v19 = a4[v11];
      if ( !v19
        || !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)v19 + 96LL))(
              v19,
              130LL) )
      {
        return (unsigned int)-1073741811;
      }
      ++v11;
    }
    v12 = (struct DirectComposition::CResourceMarshaler **)*((_QWORD *)this + 12);
    v13 = 104LL;
    v21 = 512;
    v14 = 108LL;
LABEL_7:
    v15 = (unsigned int *)((char *)this + v13);
    if ( v12 )
    {
      DirectComposition::CPrimitiveGroupMarshaler::ReleaseResourceMarshalers(
        (DirectComposition::CPrimitiveGroupMarshaler *)v13,
        a2,
        v12,
        (unsigned int *)((char *)this + v13));
      *((_DWORD *)this + 4) |= v21;
    }
    v16 = 80LL;
    if ( a3 != 1 )
      v16 = 96LL;
    *(_QWORD *)((char *)this + v16) = a4;
    *v15 = a5;
    *(_DWORD *)((char *)this + v14) = 0;
    *a6 = 1;
    if ( *v15 )
    {
      do
        DirectComposition::CResourceMarshaler::AddRef(a4[v6++]);
      while ( v6 < *v15 );
    }
  }
  return (unsigned int)v10;
}
