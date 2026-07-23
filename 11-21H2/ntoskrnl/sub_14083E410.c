/*
 * XREFs of sub_14083E410 @ 0x14083E410
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     sub_1402E0200 @ 0x1402E0200 (sub_1402E0200.c)
 *     sub_1402E0340 @ 0x1402E0340 (sub_1402E0340.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1406C5724 @ 0x1406C5724 (sub_1406C5724.c)
 *     sub_14077FAC0 @ 0x14077FAC0 (sub_14077FAC0.c)
 *     sub_14077FFEC @ 0x14077FFEC (sub_14077FFEC.c)
 *     sub_14083EAEC @ 0x14083EAEC (sub_14083EAEC.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14083E410(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _WORD *Pool2; // rax
  _WORD *v9; // rdi
  __int64 v10; // rdx
  _WORD *v11; // rcx
  unsigned __int64 v12; // rax
  _WORD *v13; // rcx
  __int64 v14; // rcx
  unsigned int v15; // esi
  unsigned int v16; // eax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rsi
  HANDLE Handle; // [rsp+30h] [rbp-30h] BYREF
  unsigned __int64 v22; // [rsp+38h] [rbp-28h] BYREF
  _WORD *v23; // [rsp+40h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-18h] BYREF
  char v25; // [rsp+A8h] [rbp+48h] BYREF

  Handle = 0LL;
  v23 = 0LL;
  v22 = 0LL;
  v25 = 0;
  DestinationString = 0LL;
  Pool2 = (_WORD *)ExAllocatePool2(256LL, 400LL, 1380994640LL);
  v9 = Pool2;
  if ( Pool2 )
  {
    v10 = 200LL;
    v11 = Pool2;
    if ( *(_WORD *)(a4 + 4) )
    {
      if ( (int)sub_1402E0340(Pool2, 0xC8uLL, (const WCHAR *)(a4 + 4), &v23, &v22, 2304) < 0 || (v12 = v22, v22 < 2) )
      {
LABEL_14:
        ExFreePoolWithTag(v9, 0);
        goto LABEL_15;
      }
      v13 = v23;
      *v23 = 92;
      v11 = v13 + 1;
      v10 = v12 - 2;
      *v11 = 0;
    }
    if ( (int)sub_1402E0200(v11, v10, a3) >= 0 )
    {
      if ( *(_DWORD *)a4 < 3u )
      {
        v18 = 0LL;
        if ( a1 )
          v18 = *(_QWORD *)(a1 + 224);
        if ( (int)sub_14077FFEC(v18, a2, a3, 8u, 0x20019u, (__int64)&Handle) >= 0 )
        {
          v19 = ExAllocatePool2(256LL, 440LL, 1380994640LL);
          v20 = v19;
          if ( v19 )
          {
            *(_DWORD *)v19 = *(_DWORD *)a4 + 1;
            sub_1402E0340((_WORD *)(v19 + 4), 0xC8uLL, v9, 0LL, 0LL, 2304);
            *(_BYTE *)(v20 + 404) = *(_BYTE *)(a4 + 404);
            *(_QWORD *)(v20 + 408) = *(_QWORD *)(a4 + 408);
            *(_QWORD *)(v20 + 416) = *(_QWORD *)(a4 + 416);
            *(_QWORD *)(v20 + 424) = *(_QWORD *)(a4 + 424);
            *(_DWORD *)(v20 + 432) = *(_DWORD *)(a4 + 432);
            *(_DWORD *)(v20 + 436) = *(_DWORD *)(a4 + 436);
            sub_14083EAEC(a1, Handle, sub_14083E410, v20);
            *(_DWORD *)(a4 + 436) = *(_DWORD *)(v20 + 436);
            *(_QWORD *)(a4 + 424) = *(_QWORD *)(v20 + 424);
            *(_DWORD *)(a4 + 432) = *(_DWORD *)(v20 + 432);
            ExFreePoolWithTag((PVOID)v20, 0);
          }
        }
      }
      else if ( (int)sub_14077FAC0(v14, v9) >= 0 && RtlInitUnicodeStringEx(&DestinationString, v9) >= 0 )
      {
        v15 = DestinationString.MaximumLength >> 1;
        if ( (!*(_BYTE *)(a4 + 404) || sub_1406C5724(a1, v9, &v25) >= 0 && v25)
          && (!*(_QWORD *)(a4 + 408) || (unsigned __int8)sub_14042A5E0(a1, v9)) )
        {
          *(_DWORD *)(a4 + 436) += v15;
          v16 = *(_DWORD *)(a4 + 432);
          if ( v16 > v15 )
          {
            sub_1402E0340(*(_WORD **)(a4 + 424), v16, v9, 0LL, 0LL, 2304);
            *(_QWORD *)(a4 + 424) += 2LL * v15;
            *(_DWORD *)(a4 + 432) -= v15;
          }
        }
      }
    }
    goto LABEL_14;
  }
LABEL_15:
  if ( Handle )
    ZwClose(Handle);
  return 0LL;
}
