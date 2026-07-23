/*
 * XREFs of LdrpResSearchResourceHandle @ 0x1800EF7DC
 * Callers:
 *     LdrResSearchResource @ 0x180064700 (LdrResSearchResource.c)
 * Callees:
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180027780 (RtlGetCurrentServiceSessionId.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     RtlLcidToLocaleName @ 0x18004B900 (RtlLcidToLocaleName.c)
 *     LdrpResSearchResourceInsideDirectory @ 0x180065904 (LdrpResSearchResourceInsideDirectory.c)
 *     LdrResFallbackLangList @ 0x180066B4C (LdrResFallbackLangList.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     memmove @ 0x1800AAB40 (memmove.c)
 *     memset @ 0x1800AAE00 (memset.c)
 *     LdrpTraceLoadMUIDll @ 0x1800EC820 (LdrpTraceLoadMUIDll.c)
 *     LdrpResFileSize @ 0x1800EF240 (LdrpResFileSize.c)
 *     LdrpResReadFile @ 0x1800EF728 (LdrpResReadFile.c)
 *     LdrpResSetFilePointer @ 0x1800EFEC0 (LdrpResSetFilePointer.c)
 */

int __fastcall LdrpResSearchResourceHandle(
        char *Handle,
        int a2,
        __int64 a3,
        int a4,
        unsigned __int64 *a5,
        _QWORD *a6,
        void *a7,
        __int64 a8)
{
  __int16 v8; // di
  __int64 v10; // r13
  __int64 v11; // rcx
  __int64 v12; // r12
  __int64 v13; // rcx
  int v14; // ebx
  int result; // eax
  int File; // edi
  PVOID Heap; // rax
  unsigned int v18; // edi
  unsigned int v19; // ebx
  unsigned int v20; // eax
  int v21; // ecx
  unsigned __int16 v22; // cx
  unsigned int v23; // r15d
  ULONG v24; // r14d
  _DWORD *v25; // rbx
  int v26; // edx
  unsigned int v27; // ecx
  unsigned __int64 v28; // r14
  char *v29; // r15
  _DWORD *v30; // r15
  __int64 v31; // r14
  int v32; // [rsp+70h] [rbp-4D8h]
  unsigned __int16 v33; // [rsp+74h] [rbp-4D4h] BYREF
  void *v34[2]; // [rsp+78h] [rbp-4D0h] BYREF
  int v35; // [rsp+88h] [rbp-4C0h]
  int v36; // [rsp+8Ch] [rbp-4BCh]
  int v37; // [rsp+90h] [rbp-4B8h]
  __int64 v38; // [rsp+98h] [rbp-4B0h] BYREF
  HANDLE Handlea; // [rsp+A0h] [rbp-4A8h]
  __int64 v40; // [rsp+A8h] [rbp-4A0h]
  void *v41; // [rsp+B0h] [rbp-498h]
  _UNICODE_STRING LocaleName; // [rsp+B8h] [rbp-490h] BYREF
  _QWORD *v43; // [rsp+C8h] [rbp-480h]
  unsigned __int64 *v44; // [rsp+D0h] [rbp-478h]
  int v45; // [rsp+D8h] [rbp-470h] BYREF
  const wchar_t *v46; // [rsp+E0h] [rbp-468h]
  int v47; // [rsp+F0h] [rbp-458h] BYREF
  unsigned __int16 v48; // [rsp+F4h] [rbp-454h]
  unsigned __int16 v49; // [rsp+F6h] [rbp-452h]
  unsigned __int16 v50; // [rsp+104h] [rbp-444h]
  __int16 v51; // [rsp+108h] [rbp-440h]
  unsigned int v52; // [rsp+164h] [rbp-3E4h]
  unsigned int v53; // [rsp+174h] [rbp-3D4h]
  unsigned int v54; // [rsp+178h] [rbp-3D0h]
  int v55; // [rsp+17Ch] [rbp-3CCh]
  unsigned int v56; // [rsp+188h] [rbp-3C0h]
  int v57; // [rsp+18Ch] [rbp-3BCh]
  __int16 v58[30]; // [rsp+200h] [rbp-348h] BYREF
  unsigned int v59; // [rsp+23Ch] [rbp-30Ch]
  unsigned __int16 v60[264]; // [rsp+240h] [rbp-308h] BYREF
  _WORD Src[88]; // [rsp+450h] [rbp-F8h] BYREF

  v36 = a4;
  v40 = a3;
  v8 = a2;
  v35 = a2;
  Handlea = Handle;
  v44 = a5;
  v43 = a6;
  v41 = a7;
  *(_QWORD *)&LocaleName.Length = a8;
  LODWORD(v34[0]) = 4456514;
  v34[1] = L"LdrpResSearchResourceHandle Enter";
  v45 = 4325440;
  v46 = L"LdrpResSearchResourceHandle Exit";
  memset(Src, 0, 0xACuLL);
  v10 = 2147353477LL;
  if ( RtlGetCurrentServiceSessionId() )
    v11 = (__int64)NtCurrentPeb()->SharedData + 555;
  else
    v11 = 2147353477LL;
  if ( (*(_BYTE *)v11 & 1) != 0 )
  {
    v12 = 2147353476LL;
    if ( RtlGetCurrentServiceSessionId() )
      v13 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v13 = 2147353476LL;
    LdrpTraceLoadMUIDll((unsigned __int16 *)v34, *(unsigned __int8 *)v13);
  }
  else
  {
    v12 = 2147353476LL;
  }
  if ( (unsigned __int64)(Handle - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    File = -1073741811;
    v32 = -1073741811;
    Heap = 0LL;
    goto LABEL_56;
  }
  v14 = v8 & 0x1000;
  v37 = v14;
  result = LdrpResFileSize(Handle, &v38);
  if ( result < 0 && (v8 & 0x1000) != 0 )
    return result;
  result = LdrpResReadFile(Handle, 0LL, v58, 0x40u);
  if ( result < 0 )
    return result;
  if ( v58[0] != 23117 )
    goto LABEL_15;
  v18 = v59;
  if ( v14 )
  {
    if ( (unsigned __int64)v59 + 264 < v59 )
      goto LABEL_15;
    if ( v59 > 0x10000000 )
      goto LABEL_15;
    if ( v59 + 264 < v59 )
      goto LABEL_15;
    v19 = v38;
    if ( (unsigned __int64)v59 + 264 >= (unsigned int)v38 )
      goto LABEL_15;
  }
  else
  {
    v19 = v38;
  }
  result = LdrpResReadFile(Handle, v59, &v47, 0x108u);
  if ( result < 0 )
    return result;
  if ( v47 != 17744 )
    goto LABEL_15;
  if ( v51 == 267 )
  {
    v20 = v48;
    if ( v48 != 332 )
    {
      if ( (unsigned __int16)(v48 - 448) > 4u )
        goto LABEL_15;
      v21 = 21;
      LOWORD(v20) = v48 - 448;
      if ( !_bittest(&v21, v20) )
        goto LABEL_15;
    }
    if ( v52 > 2 && v55 )
    {
      v22 = v50;
      if ( v50 >= 0x78u )
      {
        v23 = v54;
        goto LABEL_42;
      }
      goto LABEL_15;
    }
LABEL_31:
    File = -1073741687;
    goto LABEL_16;
  }
  if ( v51 != 523 || v48 != 0xAA64 && v48 != 0x8664 )
    goto LABEL_15;
  if ( v53 <= 2 || !v57 )
    goto LABEL_31;
  v22 = v50;
  if ( v50 >= 0x88u )
  {
    v23 = v56;
LABEL_42:
    if ( !v23 )
      return -1073741687;
    if ( !v49 )
      goto LABEL_15;
    v24 = 40 * v49;
    if ( v18 + v24 + v22 + 24 > v19 )
      goto LABEL_15;
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v24);
    v34[0] = Heap;
    if ( !Heap )
    {
      File = -1073741801;
      v32 = -1073741801;
      goto LABEL_56;
    }
    File = LdrpResReadFile((char *)Handlea, v50 + v18 + 24, v34[0], v24);
    v32 = File;
    if ( File >= 0 )
    {
      v25 = v34[0];
      v26 = 0;
      if ( v49 )
      {
        do
        {
          v27 = v25[3];
          if ( v23 >= v27 && v23 < v25[4] + v27 )
            break;
          v25 += 10;
          ++v26;
        }
        while ( v26 < v49 );
      }
      if ( v26 < v49 && (v28 = v23 + (unsigned int)v25[5] - (unsigned __int64)(unsigned int)v25[3]) != 0 )
      {
        v29 = (char *)Handlea;
        File = LdrpResSetFilePointer(Handlea, v28);
        v32 = File;
        if ( File >= 0 )
        {
          if ( v36 == 3 )
          {
            v60[0] = 0;
            if ( (v35 & 0x20) != 0 )
            {
              v60[0] = 1;
              v60[2] = 0;
            }
            else
            {
              File = LdrResFallbackLangList(0LL, 0, *(_WORD *)(v40 + 16), v35, v60);
              v32 = File;
              if ( File < 0 && v37 )
                goto LABEL_55;
            }
          }
          v33 = 0;
          File = LdrpResSearchResourceInsideDirectory(
                   0LL,
                   v29,
                   (unsigned int)v38,
                   v28,
                   (__int64)&v47,
                   (__int64)v25,
                   v40,
                   v36,
                   (__int64)v60,
                   v44,
                   v43,
                   v35,
                   &v33);
          v32 = File;
          if ( File >= 0 )
          {
            v30 = *(_DWORD **)&LocaleName.Length;
            if ( *(_QWORD *)&LocaleName.Length )
            {
              if ( !v33 )
              {
                LODWORD(v31) = 0;
                goto LABEL_80;
              }
              LocaleName.Buffer = Src;
              LocaleName.MaximumLength = 172;
              File = RtlLcidToLocaleName(v33, &LocaleName, 2u, 0);
              v32 = File;
              if ( File >= 0 )
              {
                v31 = -1LL;
                do
                  ++v31;
                while ( Src[v31] );
LABEL_80:
                if ( (unsigned int)v31 < *v30 && v41 )
                {
                  memmove(v41, Src, 2LL * (unsigned int)v31);
                  *v30 = v31 + 1;
                  *((_WORD *)v41 + (unsigned int)v31) = 0;
                  Heap = v34[0];
                }
                else
                {
                  *v30 = v31 + 1;
                  File = -1073741789;
                  v32 = -1073741789;
                  Heap = v34[0];
                }
                goto LABEL_56;
              }
            }
          }
        }
      }
      else
      {
        File = -1073741701;
        v32 = -1073741701;
      }
    }
LABEL_55:
    Heap = v34[0];
    goto LABEL_56;
  }
LABEL_15:
  File = -1073741701;
LABEL_16:
  v32 = File;
  Heap = 0LL;
LABEL_56:
  if ( Heap )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
    File = v32;
  }
  if ( RtlGetCurrentServiceSessionId() )
  {
    v10 = (__int64)NtCurrentPeb()->SharedData + 555;
    File = v32;
  }
  if ( (*(_BYTE *)v10 & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
    {
      v12 = (__int64)NtCurrentPeb()->SharedData + 554;
      File = v32;
    }
    LdrpTraceLoadMUIDll((unsigned __int16 *)&v45, *(unsigned __int8 *)v12);
  }
  return File;
}
