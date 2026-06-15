/*
 * XREFs of ?GetBlob@CUnsupportedConnectorFormats@@QEAAJPEAPEAEPEAK@Z @ 0x180020610
 * Callers:
 *     ?CacheUnsupportedConnectorFormats@CEndpointCharacteristics@@AEAAXPEAVCUnsupportedConnectorFormats@@@Z @ 0x18002055C (-CacheUnsupportedConnectorFormats@CEndpointCharacteristics@@AEAAXPEAVCUnsupportedConnectorFormat.c)
 * Callees:
 *     ?Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x18002D3D4 (-Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memcpy_0 @ 0x18006A819 (memcpy_0.c)
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
  unsigned int v10; // ecx
  _WORD *v11; // r9
  int v12; // r8d
  _DWORD *v13; // rdx
  unsigned int v14; // ecx
  _WORD *v15; // r9
  int v16; // r8d
  _WORD *v17; // rdx
  unsigned int v18; // ecx
  _WORD *v19; // r9
  int v20; // r8d
  _WORD *v21; // rdx
  unsigned int v22; // ecx
  _DWORD *v23; // r9
  int v24; // r8d
  _DWORD *v25; // rdx
  unsigned int v26; // eax
  unsigned __int8 *v27; // rax
  void *v28; // rcx
  __int64 v30; // rdx
  int v31; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  _WORD *v33; // [rsp+50h] [rbp+8h] BYREF

  v33 = 0LL;
  v6 = (unsigned int)(*((__int16 *)this + 117) + *((__int16 *)this + 114));
  v7 = *((_DWORD *)this + 1083) + 10 + 2 * (*((__int16 *)this + 116) + *((__int16 *)this + 115) + 2 * v6);
  v8 = CTCoAllocPolicy::Alloc((void *)v6, 1u, v7, (void **)&v33);
  if ( v8 < 0 )
  {
    v9 = v33;
  }
  else
  {
    if ( v7 < 2 )
    {
      v8 = -2147024774;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x163F,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)0x8007007ALL,
        v31);
      v28 = v33;
      goto LABEL_26;
    }
    v9 = v33;
    *v33 = 10;
    if ( v7 - 2 < 2 )
    {
      v30 = 5698LL;
    }
    else
    {
      v9[1] = *((_WORD *)this + 114);
      v10 = v7 - 4;
      v11 = v9 + 2;
      v12 = 0;
      if ( *((__int16 *)this + 114) <= 0 )
      {
LABEL_8:
        if ( v10 < 2 )
        {
          v30 = 5704LL;
        }
        else
        {
          *v11 = *((_WORD *)this + 115);
          v14 = v10 - 2;
          v15 = v11 + 1;
          v16 = 0;
          if ( *((__int16 *)this + 115) <= 0 )
          {
LABEL_13:
            if ( v14 < 2 )
            {
              v30 = 5710LL;
            }
            else
            {
              *v15 = *((_WORD *)this + 116);
              v18 = v14 - 2;
              v19 = v15 + 1;
              v20 = 0;
              if ( *((__int16 *)this + 116) <= 0 )
              {
LABEL_18:
                if ( v18 < 2 )
                {
                  v30 = 5716LL;
                }
                else
                {
                  *v19 = *((_WORD *)this + 117);
                  v22 = v18 - 2;
                  v23 = v19 + 1;
                  v24 = 0;
                  if ( *((__int16 *)this + 117) <= 0 )
                  {
LABEL_23:
                    v26 = *((_DWORD *)this + 1083);
                    if ( v22 < v26 )
                    {
                      v8 = -2147024774;
                    }
                    else
                    {
                      memcpy_0(v23, (char *)this + 236, v26);
                      *a3 = v7;
                      v27 = (unsigned __int8 *)v9;
                      v9 = 0LL;
                      *a2 = v27;
                    }
                    goto LABEL_25;
                  }
                  v25 = (_DWORD *)((char *)this + 164);
                  while ( v22 >= 4 )
                  {
                    *v23 = *v25;
                    v22 -= 4;
                    ++v23;
                    ++v24;
                    ++v25;
                    if ( v24 >= *((__int16 *)this + 117) )
                      goto LABEL_23;
                  }
                  v30 = 5719LL;
                }
              }
              else
              {
                v21 = (_WORD *)((char *)this + 100);
                while ( v18 >= 2 )
                {
                  *v19 = *v21;
                  v18 -= 2;
                  ++v19;
                  ++v20;
                  v21 += 2;
                  if ( v20 >= *((__int16 *)this + 116) )
                    goto LABEL_18;
                }
                v30 = 5713LL;
              }
            }
          }
          else
          {
            v17 = (_WORD *)((char *)this + 68);
            while ( v14 >= 2 )
            {
              *v15 = *v17;
              v14 -= 2;
              ++v15;
              ++v16;
              v17 += 2;
              if ( v16 >= *((__int16 *)this + 115) )
                goto LABEL_13;
            }
            v30 = 5707LL;
          }
        }
      }
      else
      {
        v13 = (_DWORD *)((char *)this + 4);
        while ( v10 >= 4 )
        {
          *(_DWORD *)v11 = *v13;
          v10 -= 4;
          v11 += 2;
          ++v12;
          ++v13;
          if ( v12 >= *((__int16 *)this + 114) )
            goto LABEL_8;
        }
        v30 = 5701LL;
      }
    }
    v8 = -2147024774;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v30,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)0x8007007ALL,
      v31);
  }
LABEL_25:
  v28 = v9;
LABEL_26:
  CoTaskMemFree(v28);
  return (unsigned int)v8;
}
