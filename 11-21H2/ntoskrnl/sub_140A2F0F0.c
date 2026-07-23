/*
 * XREFs of sub_140A2F0F0 @ 0x140A2F0F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     sub_1402E0200 @ 0x1402E0200 (sub_1402E0200.c)
 *     sub_1402E0340 @ 0x1402E0340 (sub_1402E0340.c)
 *     _wcsicmp @ 0x1403E1490 (_wcsicmp.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1406994BC @ 0x1406994BC (sub_1406994BC.c)
 *     sub_14077FFEC @ 0x14077FFEC (sub_14077FFEC.c)
 *     sub_14083EAEC @ 0x14083EAEC (sub_14083EAEC.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140A2F0F0(__int64 a1, __int64 a2, const wchar_t *a3, __int64 a4)
{
  __int64 v6; // rsi
  unsigned int v9; // r15d
  _WORD *Pool2; // r14
  _WORD *v11; // rcx
  int v12; // eax
  _WORD *v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rax
  _OWORD *v17; // rcx
  _OWORD *v18; // rax
  __int64 v19; // rdx
  __int128 v20; // xmm1
  unsigned int v21; // eax
  unsigned int v22; // edi
  int v24; // [rsp+40h] [rbp-30h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-28h] BYREF
  unsigned __int64 v26; // [rsp+50h] [rbp-20h] BYREF
  _WORD *v27; // [rsp+58h] [rbp-18h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-10h] BYREF
  int v29; // [rsp+B8h] [rbp+48h] BYREF

  v27 = 0LL;
  v26 = 0LL;
  Handle = 0LL;
  v6 = 0LL;
  v29 = 0;
  v24 = 0;
  DestinationString = 0LL;
  if ( wcsicmp(a3, L"Properties") )
  {
    v9 = 256;
    Pool2 = (_WORD *)ExAllocatePool2(256LL, 512LL, 1111770192LL);
    if ( Pool2 )
    {
      v11 = Pool2;
      if ( *(_WORD *)(a4 + 8) )
      {
        if ( (int)sub_1402E0340(Pool2, 0x100uLL, (const WCHAR *)(a4 + 8), &v27, &v26, 2304) < 0 )
          goto LABEL_26;
        v12 = v26;
        if ( v26 < 2 )
          goto LABEL_26;
        v13 = v27;
        *v27 = 92;
        v11 = v13 + 1;
        *v11 = 0;
        v9 = v12 - 2;
      }
      if ( (int)sub_1402E0200(v11, v9, (__int64)a3) < 0 )
        goto LABEL_26;
      v14 = 0LL;
      if ( a1 )
        v14 = *(_QWORD *)(a1 + 224);
      if ( (int)sub_14077FFEC(v14, a2, (__int64)a3, 8u, 0x20019u, (__int64)&Handle) < 0
        || (int)sub_1406994BC(v15, (int)Handle, (int)&v29, 0, (__int64)&v24, 0LL, 0LL) < 0 )
      {
        goto LABEL_26;
      }
      if ( !v29 || *(_DWORD *)(a4 + 4) >= *(_DWORD *)a4 )
        goto LABEL_18;
      v16 = ExAllocatePool2(256LL, 552LL, 1111770192LL);
      v6 = v16;
      if ( v16 )
      {
        v17 = (_OWORD *)v16;
        v18 = (_OWORD *)a4;
        v19 = 4LL;
        do
        {
          *v17 = *v18;
          v17[1] = v18[1];
          v17[2] = v18[2];
          v17[3] = v18[3];
          v17[4] = v18[4];
          v17[5] = v18[5];
          v17[6] = v18[6];
          v17 += 8;
          v20 = v18[7];
          v18 += 8;
          *(v17 - 1) = v20;
          --v19;
        }
        while ( v19 );
        *v17 = *v18;
        v17[1] = v18[1];
        *((_QWORD *)v17 + 4) = *((_QWORD *)v18 + 4);
        ++*(_DWORD *)(v6 + 4);
        sub_1402E0340((_WORD *)(v6 + 8), 0x100uLL, Pool2, 0LL, 0LL, 2304);
        sub_14083EAEC(a1, Handle, (__int64)&sub_140A2F0F0, v6);
        *(_QWORD *)(a4 + 536) = *(_QWORD *)(v6 + 536);
        *(_DWORD *)(a4 + 544) = *(_DWORD *)(v6 + 544);
        *(_DWORD *)(a4 + 548) = *(_DWORD *)(v6 + 548);
LABEL_18:
        if ( v24
          && (!*(_QWORD *)(a4 + 520) || (unsigned __int8)sub_14042A5E0(a1, Pool2))
          && RtlInitUnicodeStringEx(&DestinationString, Pool2) >= 0 )
        {
          v21 = *(_DWORD *)(a4 + 544);
          v22 = DestinationString.MaximumLength >> 1;
          *(_DWORD *)(a4 + 548) += v22;
          if ( v21 > v22 )
          {
            sub_1402E0340(*(_WORD **)(a4 + 536), v21, Pool2, 0LL, 0LL, 2304);
            *(_QWORD *)(a4 + 536) += 2LL * v22;
            *(_DWORD *)(a4 + 544) -= v22;
          }
        }
        if ( v6 )
          ExFreePoolWithTag((PVOID)v6, 0);
      }
LABEL_26:
      ExFreePoolWithTag(Pool2, 0);
    }
  }
  if ( Handle )
    ZwClose(Handle);
  return 0LL;
}
