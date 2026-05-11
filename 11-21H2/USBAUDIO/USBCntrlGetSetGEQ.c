/*
 * XREFs of USBCntrlGetSetGEQ @ 0x1C00391D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C00018BC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     USBHwGetSetProperty @ 0x1C0033E28 (USBHwGetSetProperty.c)
 */

__int64 __fastcall USBCntrlGetSetGEQ(__int64 a1, __int64 a2, int a3, unsigned int *a4, unsigned int a5, int a6)
{
  unsigned int v6; // ebx
  __int64 v7; // r15
  unsigned int v9; // edi
  unsigned int v10; // r13d
  __int64 v11; // rbp
  int *Pool2; // r14
  char v13; // di
  _BYTE *v14; // rcx
  __int64 v15; // r9
  int *v16; // r8
  int v17; // eax
  unsigned int v18; // edx
  int v19; // eax
  unsigned int v20; // ecx
  __int64 v21; // rdx
  __int64 v23; // rax
  int v24; // [rsp+20h] [rbp-78h]
  __int64 v25; // [rsp+50h] [rbp-48h]
  int SetProperty; // [rsp+C0h] [rbp+28h]

  v6 = 0;
  v7 = *(_QWORD *)(a2 + 128);
  v9 = -1073741670;
  v10 = 30;
  v25 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 72LL);
  v11 = 5LL * a5;
  if ( *(_DWORD *)(v7 + 40LL * a5 + 12) )
    v10 = *(_DWORD *)(v7 + 40LL * a5 + 12);
  Pool2 = (int *)ExAllocatePool2(64LL, v10 + 4, 1096972357LL);
  if ( !Pool2 )
    return v9;
  v13 = 1;
  if ( a6 != 1 )
  {
LABEL_9:
    SetProperty = USBHwGetSetProperty(
                    a1,
                    0x1Bu,
                    a6 != 1,
                    a6,
                    6,
                    *(_WORD *)(v7 + 40LL * a5 + 8),
                    *(_WORD *)(a2 + 80),
                    *(unsigned __int8 *)(*(_QWORD *)(v25 + 48) + 2LL),
                    Pool2,
                    v10 + 4);
    if ( SetProperty >= 0 )
    {
      if ( (a6 & 0x80u) == 0 )
      {
        if ( *(_DWORD *)(v7 + 8 * v11 + 12) )
        {
          do
          {
            v23 = v6++;
            *(_DWORD *)(*(_QWORD *)(v7 + 8 * v11 + 32) + 20 * v23) = a4[v23];
          }
          while ( v6 < *(_DWORD *)(v7 + 8 * v11 + 12) );
        }
      }
      else
      {
        if ( *a4 )
          goto LABEL_33;
        v18 = 0;
        a4[1] = *Pool2;
        do
        {
          v19 = *Pool2;
          v20 = *a4;
          if ( _bittest(&v19, v18) )
            *a4 = ++v20;
          ++v18;
        }
        while ( v18 < 0x1E );
        if ( v20 )
        {
LABEL_33:
          do
          {
            v21 = v6++;
            *(_DWORD *)(*((_QWORD *)a4 + 2) + 4 * v21) = *((char *)Pool2 + v21 + 4) << 14;
          }
          while ( v6 < *a4 );
        }
      }
    }
    ExFreePool(Pool2);
    return (unsigned int)SetProperty;
  }
  if ( a3 == 4 * v10 )
  {
    *Pool2 = *(_DWORD *)(v7 + 40LL * a5 + 16);
    v14 = Pool2 + 1;
    v15 = v10;
    v16 = (int *)a4;
    do
    {
      v17 = *v16++;
      *v14++ = v17 / 0x4000;
      --v15;
    }
    while ( v15 );
    goto LABEL_9;
  }
  ExFreePool(Pool2);
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    v13 = 0;
  }
  if ( v13 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v13,
      *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v24,
      0xAu,
      0x10u,
      (__int64)&WPP_9b39d06d20dd34f85528fc39f9299c88_Traceguids);
  return 3221225990LL;
}
