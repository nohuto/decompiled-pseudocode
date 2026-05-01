/*
 * XREFs of ?PiiFilterEmbeddedPathsExecute_Ge@@YAJPEAG_K1PEBG@Z @ 0x180284950
 * Callers:
 *     ?PiiFilterExecute_Ge@@YAJPEAG_K1PEBG@Z @ 0x180284D78 (-PiiFilterExecute_Ge@@YAJPEAG_K1PEBG@Z.c)
 * Callees:
 *     RtlStringCopyWorkerW @ 0x1800EF45C (RtlStringCopyWorkerW.c)
 *     _o_iswspace_0 @ 0x1801C7488 (_o_iswspace_0.c)
 *     ?PiipIsInvalidEmailCharacter@@YAHGHAEAH@Z @ 0x180284E7C (-PiipIsInvalidEmailCharacter@@YAHGHAEAH@Z.c)
 *     ?RtlStringCchCatW@@YAJPEAG_KPEBG@Z @ 0x180284F1C (-RtlStringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     AslStringUpper @ 0x180285090 (AslStringUpper.c)
 *     ?GetValue@RtlNameValueArray@@QEBAPEBG_K@Z @ 0x180738380 (-GetValue@RtlNameValueArray@@QEBAPEBG_K@Z.c)
 *     AslFree @ 0x180738B18 (AslFree.c)
 */

__int64 __fastcall PiiFilterEmbeddedPathsExecute_Ge(
        unsigned __int16 *a1,
        __int64 a2,
        unsigned __int64 *a3,
        const unsigned __int16 *a4)
{
  wchar_t *v7; // r13
  int v8; // edi
  unsigned __int16 *v9; // rsi
  __int64 v10; // r8
  unsigned __int64 v11; // r8
  unsigned int v12; // r15d
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rdi
  __int64 *v15; // rax
  RtlNameValueArray *v16; // r9
  __int64 v17; // rbp
  const unsigned __int16 *Value; // r12
  __int64 v19; // r8
  __int64 v20; // r8
  __int64 v21; // rbp
  wchar_t *v22; // rax
  __int64 v23; // r8
  __int64 v24; // rax
  unsigned __int16 *v25; // r9
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // rdx
  const wchar_t *v28; // rcx
  unsigned __int16 *i; // rdx
  wchar_t *v30; // rax
  wchar_t *v31; // rbx
  unsigned __int16 *v32; // rdi
  int v33; // ebp
  BOOL v34; // eax
  char *v35; // rdi
  unsigned __int64 v36; // rcx
  __int64 v38; // [rsp+78h] [rbp+10h] BYREF
  wchar_t *Heap; // [rsp+80h] [rbp+18h]

  v38 = a2;
  Heap = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x208uLL);
  v7 = Heap;
  if ( Heap )
  {
    v9 = (unsigned __int16 *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x208uLL);
    if ( v9 )
    {
      v8 = RtlStringCopyWorkerW(a1, 260LL, v10, (__int64)a4);
      if ( v8 >= 0 )
      {
        v11 = a3[8];
        v12 = 0;
        v13 = a3[2];
        if ( v13 + v11 )
        {
          while ( 1 )
          {
            v14 = v12;
            if ( v12 >= v13 )
            {
              v14 = v12 - v13;
              v16 = (RtlNameValueArray *)(a3 + 6);
              v15 = 0LL;
              if ( v14 < v11 )
              {
                if ( !is_mul_ok(a3[7], v14) || (v15 = (__int64 *)(a3[11] + a3[7] * v14), (unsigned __int64)v15 < a3[11]) )
                  v15 = 0LL;
              }
            }
            else
            {
              if ( !is_mul_ok(a3[1], v12) || (v15 = (__int64 *)(a3[5] + a3[1] * v12), (unsigned __int64)v15 < a3[5]) )
                v15 = 0LL;
              v16 = (RtlNameValueArray *)a3;
            }
            v17 = *v15;
            Value = RtlNameValueArray::GetValue(v16, v14);
            v8 = RtlStringCopyWorkerW(v9, 260LL, v19, (__int64)a1);
            if ( v8 < 0 )
              break;
            AslStringUpper(v9);
            v8 = RtlStringCopyWorkerW(v7, 260LL, v20, v17);
            if ( v8 < 0 )
              break;
            v21 = -1LL;
            do
              ++v21;
            while ( v7[v21] );
            if ( v21 && (AslStringUpper(v7), (v22 = wcsstr(v9, v7)) != 0LL) )
            {
              v24 = v22 - v9;
              a1[v24] = 0;
              v25 = &a1[v21 + v24];
              if ( v25 >= a1 + 260 )
                break;
              v8 = RtlStringCopyWorkerW(v9, 260LL, v23, (__int64)v25);
              if ( v8 < 0 )
                break;
              v8 = RtlStringCchCatW(a1, v26, Value);
              if ( v8 < 0 )
                break;
              v8 = RtlStringCchCatW(a1, v27, v9);
              if ( v8 < 0 )
                break;
            }
            else
            {
              ++v12;
            }
            v11 = a3[8];
            v13 = a3[2];
            if ( v12 >= v13 + v11 )
              goto LABEL_28;
          }
        }
        else
        {
LABEL_28:
          v8 = RtlStringCopyWorkerW(v9, 260LL, v11, (__int64)a1);
          if ( v8 >= 0 )
          {
            AslStringUpper(v9);
            v28 = v9;
            while ( 1 )
            {
              v30 = wcsstr(v28, L"\\USERS\\");
              if ( !v30 )
                break;
              v28 = v30 + 7;
              for ( i = &a1[v30 + 7 - v9]; *v28 && *v28 != 92 && i < a1 + 260; ++i )
              {
                ++v28;
                *i = 120;
              }
            }
            v31 = wcschr(a1, 0x40u);
            if ( v31 )
            {
              do
              {
                if ( !*v31 )
                  break;
                v32 = v31 - 1;
                LODWORD(v38) = 0;
                v33 = 0;
                while ( *++v31 && !(unsigned int)PiipIsInvalidEmailCharacter(*v31, 0, (int *)&v38) )
                {
                  if ( *v31 == 46 )
                    v33 = 1;
                }
                v34 = (unsigned int)o_iswspace_0() || !*v31 || *v31 == 62;
                if ( v33 && v34 )
                {
                  --v31;
                  LODWORD(v38) = 0;
                  while ( v32 >= a1 )
                  {
                    if ( (unsigned int)PiipIsInvalidEmailCharacter(*v32, 1, (int *)&v38) )
                    {
                      if ( *v32 != 60 && !(unsigned int)o_iswspace_0() )
                        goto LABEL_63;
                      break;
                    }
                    --v32;
                  }
                  if ( !(_DWORD)v38 )
                  {
                    v35 = (char *)(v32 + 1);
                    v36 = (unsigned __int64)((char *)v31 - v35 + 2) >> 1;
                    if ( v35 > (char *)v31 )
                      v36 = 0LL;
                    if ( v36 )
                    {
                      while ( v36 )
                      {
                        *(_WORD *)v35 = 35;
                        v35 += 2;
                        --v36;
                      }
                    }
                  }
                }
LABEL_63:
                v31 = wcschr(v31, 0x40u);
              }
              while ( v31 );
              v7 = Heap;
            }
            v8 = 0;
          }
        }
      }
    }
    else
    {
      v8 = -1073741801;
    }
    AslFree(NtCurrentPeb()->ProcessHeap, v7);
    if ( v9 )
      AslFree(NtCurrentPeb()->ProcessHeap, v9);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v8;
}
