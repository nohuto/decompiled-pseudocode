/*
 * XREFs of ?GetBlob@CUnsupportedConnectorFormats@@QEAAJPEAPEAEPEAK@Z @ 0x180147D34
 * Callers:
 *     ?CacheUnsupportedConnectorFormats@CEndpointCharacteristics@@AEAAXPEAVCUnsupportedConnectorFormats@@@Z @ 0x180145564 (-CacheUnsupportedConnectorFormats@CEndpointCharacteristics@@AEAAXPEAVCUnsupportedConnectorFormat.c)
 * Callees:
 *     ?Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x18004AA38 (-Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     memcpy_0 @ 0x180062529 (memcpy_0.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CUnsupportedConnectorFormats::GetBlob(
        CUnsupportedConnectorFormats *this,
        unsigned __int8 **a2,
        unsigned int *a3)
{
  unsigned __int64 v6; // rcx
  unsigned int v7; // ebp
  int v8; // edi
  _WORD *v9; // rbx
  __int64 v10; // rdx
  unsigned int v11; // ecx
  _DWORD *v12; // r9
  int v13; // r8d
  _DWORD *v14; // rdx
  unsigned int v15; // ecx
  _WORD *v16; // r9
  int v17; // r8d
  _WORD *v18; // rdx
  unsigned int v19; // ecx
  _WORD *v20; // r9
  int v21; // r8d
  _WORD *v22; // rdx
  unsigned int v23; // ecx
  _DWORD *v24; // r9
  int v25; // r8d
  _DWORD *v26; // rdx
  unsigned __int8 *v27; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  LPVOID pv; // [rsp+50h] [rbp+8h] BYREF

  pv = 0LL;
  v6 = (unsigned int)(*((__int16 *)this + 116)
                    + *((__int16 *)this + 115)
                    + 2 * (*((__int16 *)this + 117) + *((__int16 *)this + 114)));
  v7 = *((_DWORD *)this + 1083) + 10 + 2 * v6;
  v8 = CTCoAllocPolicy::Alloc((void *)v6, 1, v7, &pv);
  v9 = pv;
  if ( v8 >= 0 )
  {
    if ( v7 < 2 )
    {
      v10 = 5313LL;
LABEL_34:
      v8 = -2147024774;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)0x8007007ALL);
      goto LABEL_36;
    }
    *(_WORD *)pv = 10;
    if ( v7 - 2 < 2 )
    {
      v10 = 5316LL;
      goto LABEL_34;
    }
    v9[1] = *((_WORD *)this + 114);
    v11 = v7 - 4;
    v12 = v9 + 2;
    v13 = 0;
    if ( *((__int16 *)this + 114) > 0 )
    {
      v14 = (_DWORD *)((char *)this + 4);
      while ( v11 >= 4 )
      {
        *v12 = *v14;
        v11 -= 4;
        ++v12;
        ++v13;
        ++v14;
        if ( v13 >= *((__int16 *)this + 114) )
          goto LABEL_10;
      }
      v10 = 5319LL;
      goto LABEL_34;
    }
LABEL_10:
    if ( v11 < 2 )
    {
      v10 = 5322LL;
      goto LABEL_34;
    }
    *(_WORD *)v12 = *((_WORD *)this + 115);
    v15 = v11 - 2;
    v16 = (_WORD *)v12 + 1;
    v17 = 0;
    if ( *((__int16 *)this + 115) > 0 )
    {
      v18 = (_WORD *)((char *)this + 68);
      while ( v15 >= 2 )
      {
        *v16 = *v18;
        v15 -= 2;
        ++v16;
        ++v17;
        v18 += 2;
        if ( v17 >= *((__int16 *)this + 115) )
          goto LABEL_17;
      }
      v10 = 5325LL;
      goto LABEL_34;
    }
LABEL_17:
    if ( v15 < 2 )
    {
      v10 = 5328LL;
      goto LABEL_34;
    }
    *v16 = *((_WORD *)this + 116);
    v19 = v15 - 2;
    v20 = v16 + 1;
    v21 = 0;
    if ( *((__int16 *)this + 116) > 0 )
    {
      v22 = (_WORD *)((char *)this + 100);
      while ( v19 >= 2 )
      {
        *v20 = *v22;
        v19 -= 2;
        ++v20;
        ++v21;
        v22 += 2;
        if ( v21 >= *((__int16 *)this + 116) )
          goto LABEL_24;
      }
      v10 = 5331LL;
      goto LABEL_34;
    }
LABEL_24:
    if ( v19 < 2 )
    {
      v10 = 5334LL;
      goto LABEL_34;
    }
    *v20 = *((_WORD *)this + 117);
    v23 = v19 - 2;
    v24 = v20 + 1;
    v25 = 0;
    if ( *((__int16 *)this + 117) > 0 )
    {
      v26 = (_DWORD *)((char *)this + 164);
      while ( v23 >= 4 )
      {
        *v24 = *v26;
        v23 -= 4;
        ++v24;
        ++v25;
        ++v26;
        if ( v25 >= *((__int16 *)this + 117) )
          goto LABEL_31;
      }
      v10 = 5337LL;
      goto LABEL_34;
    }
LABEL_31:
    if ( v23 >= *((_DWORD *)this + 1083) )
    {
      memcpy_0(v24, (char *)this + 236, *((unsigned int *)this + 1083));
      *a3 = v7;
      v27 = (unsigned __int8 *)v9;
      v9 = 0LL;
      *a2 = v27;
    }
    else
    {
      v8 = -2147024774;
    }
  }
LABEL_36:
  CoTaskMemFree(v9);
  return (unsigned int)v8;
}
