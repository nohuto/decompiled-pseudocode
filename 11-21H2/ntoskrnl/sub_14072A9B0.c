/*
 * XREFs of sub_14072A9B0 @ 0x14072A9B0
 * Callers:
 *     sub_14072B8B0 @ 0x14072B8B0 (sub_14072B8B0.c)
 * Callees:
 *     FsRtlGetSupportedFeatures @ 0x14025BC20 (FsRtlGetSupportedFeatures.c)
 *     MmIsDriverVerifying @ 0x1402D87B0 (MmIsDriverVerifying.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1407F730C @ 0x1407F730C (sub_1407F730C.c)
 *     sub_140A8A8D4 @ 0x140A8A8D4 (sub_140A8A8D4.c)
 *     sub_140A8A9AC @ 0x140A8A9AC (sub_140A8A9AC.c)
 */

__int64 __fastcall sub_14072A9B0(__int64 a1, struct _DEVICE_OBJECT *a2, __int64 a3, __int64 a4, _BYTE *a5)
{
  __int64 v8; // rsi
  _BYTE *v9; // r14
  unsigned int v10; // r13d
  PFAST_IO_DISPATCH FastIoDispatch; // rcx
  PFAST_IO_QUERY_OPEN FastIoQueryOpen; // r12
  __int64 result; // rax
  int v14; // eax
  int v15; // [rsp+60h] [rbp+8h] BYREF

  v8 = 0LL;
  v15 = 0;
  if ( !*(_BYTE *)(a1 + 208) )
  {
    v9 = a5;
    *a5 = 0;
    v10 = 0;
    FastIoDispatch = a2->DriverObject->FastIoDispatch;
    if ( FastIoDispatch )
    {
      if ( FastIoDispatch->SizeOfFastIoDispatch > 0xC0 )
      {
        FastIoQueryOpen = FastIoDispatch->FastIoQueryOpen;
        if ( FastIoQueryOpen )
        {
          --*(_BYTE *)(a3 + 67);
          *(_QWORD *)(a3 + 184) -= 72LL;
          *(_QWORD *)(a4 + 40) = a2;
          if ( (dword_140C29FC0 & 0x10) != 0 && MmIsDriverVerifying(a2->DriverObject) )
            v8 = sub_140A8A9AC();
          *v9 = sub_14042A5E0(a3, *(_QWORD *)(a1 + 104));
          if ( v8 )
            sub_140A8A8D4(v8, FastIoQueryOpen);
          *(_QWORD *)(a1 + 168) = *(_QWORD *)(a3 + 112);
          if ( *v9 )
          {
            *(_DWORD *)(a1 + 32) = -1096154543;
            if ( !*(_BYTE *)(a1 + 139) )
            {
              **(_QWORD **)(a1 + 96) = **(_QWORD **)(a1 + 104);
              *(_QWORD *)(*(_QWORD *)(a1 + 96) + 8LL) = *(_QWORD *)(*(_QWORD *)(a1 + 104) + 8LL);
              *(_QWORD *)(*(_QWORD *)(a1 + 96) + 16LL) = *(_QWORD *)(*(_QWORD *)(a1 + 104) + 16LL);
              *(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL) = *(_QWORD *)(*(_QWORD *)(a1 + 104) + 24LL);
              *(_DWORD *)(*(_QWORD *)(a1 + 96) + 32LL) = *(_DWORD *)(*(_QWORD *)(a1 + 104) + 48LL);
            }
          }
          else
          {
            *(_QWORD *)(a3 + 184) += 72LL;
            ++*(_BYTE *)(a3 + 67);
          }
        }
      }
    }
    return v10;
  }
  result = FsRtlGetSupportedFeatures((__int64)a2, &v15);
  if ( (int)result >= 0 )
  {
    if ( (v15 & 4) == 0 )
    {
      *a5 = 0;
      return 0LL;
    }
    --*(_BYTE *)(a3 + 67);
    *(_QWORD *)(a3 + 184) -= 72LL;
    v14 = sub_1407F730C(a2, *(_DWORD *)(a1 + 200));
    v10 = v14;
    ++*(_BYTE *)(a3 + 67);
    *(_QWORD *)(a3 + 184) += 72LL;
    *(_QWORD *)(a1 + 168) = *(_QWORD *)(a3 + 112);
    if ( v14 < 0 )
    {
      if ( v14 == -1071906812 )
      {
        v10 = 0;
        *a5 = 0;
      }
    }
    else
    {
      *(_DWORD *)(a1 + 32) = -1096154543;
      *a5 = 1;
    }
    return v10;
  }
  return result;
}
