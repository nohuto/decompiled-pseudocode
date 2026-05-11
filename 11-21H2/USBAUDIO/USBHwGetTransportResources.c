/*
 * XREFs of USBHwGetTransportResources @ 0x1C0034040
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C00018BC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C000193C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     memmove @ 0x1C0019680 (memmove.c)
 */

__int64 __fastcall USBHwGetTransportResources(int a1, _QWORD *a2, _BYTE *a3, _DWORD *a4)
{
  __int64 v4; // rax
  unsigned int v7; // ebx
  int v8; // r14d
  __int64 v9; // r15
  __int64 v10; // r13
  PKSDEVICE Device; // rax
  char v12; // bp
  char v13; // dl
  __int64 v14; // r12
  int v15; // edi
  int v16; // edi
  int v17; // edi
  int v18; // edi
  int v19; // edi
  PDEVICE_OBJECT v20; // rcx
  char v21; // dl
  char v22; // r8
  unsigned __int16 v23; // ax
  char v24; // dl
  unsigned int *v25; // rdx
  size_t v26; // rdi
  char v27; // dl
  char v28; // dl
  char v29; // dl
  char v31; // dl
  char v32; // dl
  int v33; // [rsp+20h] [rbp-58h]

  v4 = a2[2];
  v7 = 0;
  v8 = 0;
  v9 = *(_QWORD *)(v4 + 152);
  v10 = *(_QWORD *)(v4 + 144);
  Device = KsGetDevice(a2);
  v12 = 1;
  if ( !Device )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
      || (v13 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      v13 = 0;
    }
    if ( v13 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v13,
        *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v33,
        9u,
        0xAu,
        (__int64)&WPP_0c4dbd50b0493a06c28798d01c904647_Traceguids);
    goto LABEL_9;
  }
  v14 = *((_QWORD *)Device->Context + 9);
  if ( a1 )
  {
    v15 = a1 - 1;
    if ( v15 )
    {
      v16 = v15 - 1;
      if ( !v16 )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
          || (v28 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          v28 = 0;
        }
        if ( v28 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_AND_TRACE_SF_(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            v28,
            *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            v33,
            9u,
            0xEu,
            (__int64)&WPP_0c4dbd50b0493a06c28798d01c904647_Traceguids);
        goto LABEL_32;
      }
      v17 = v16 - 1;
      if ( !v17 )
      {
        v20 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
          || (v21 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          v21 = 0;
        }
        v22 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v21 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v23 = 16;
          goto LABEL_56;
        }
LABEL_57:
        if ( *a4 )
        {
          if ( *a4 < 4u )
          {
            v7 = -1073741811;
            goto LABEL_73;
          }
          *(_WORD *)a3 = *(_WORD *)(v14 + 8);
          a3[2] = *(_BYTE *)(v10 + 186);
          a3[3] = *(_BYTE *)(v10 + 187);
        }
        else
        {
          v7 = -1073741789;
        }
        *a4 = 4;
        goto LABEL_73;
      }
      v18 = v17 - 2;
      if ( v18 )
      {
        v19 = v18 - 1;
        if ( v19 )
        {
          if ( v19 != 1 )
          {
            v7 = -1073741811;
            *a4 = 0;
            goto LABEL_73;
          }
          v20 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
            || (v21 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
          {
            v21 = 0;
          }
          v22 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v21 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v23 = 17;
LABEL_56:
            WPP_RECORDER_AND_TRACE_SF_(
              (__int64)v20->AttachedDevice,
              v21,
              v22,
              (__int64)v20->DeviceExtension,
              v33,
              9u,
              v23,
              (__int64)&WPP_0c4dbd50b0493a06c28798d01c904647_Traceguids);
            goto LABEL_57;
          }
          goto LABEL_57;
        }
        v8 = 1;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
          || (v24 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          v24 = 0;
        }
        if ( v24 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_AND_TRACE_SF_(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            v24,
            *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            v33,
            9u,
            0xFu,
            (__int64)&WPP_0c4dbd50b0493a06c28798d01c904647_Traceguids);
LABEL_32:
        v25 = *(unsigned int **)(v9 + 80);
        if ( v8 )
          v25 = *(unsigned int **)(v9 + 88);
        if ( v25 )
        {
          v26 = *v25;
          goto LABEL_36;
        }
        goto LABEL_48;
      }
      v8 = 1;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
        || (v27 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        v27 = 0;
      }
      if ( v27 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v27,
          *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          v33,
          9u,
          0xDu,
          (__int64)&WPP_0c4dbd50b0493a06c28798d01c904647_Traceguids);
    }
    else
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
        || (v31 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        v31 = 0;
      }
      if ( v31 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v31,
          *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          v33,
          9u,
          0xCu,
          (__int64)&WPP_0c4dbd50b0493a06c28798d01c904647_Traceguids);
    }
    v25 = *(unsigned int **)(v10 + 168);
    if ( v8 )
      v25 = *(unsigned int **)(v10 + 176);
    if ( v25 )
    {
      v26 = *(unsigned __int8 *)v25;
LABEL_36:
      if ( !*a4 )
      {
        *a4 = v26;
        v7 = -1073741789;
        goto LABEL_73;
      }
      if ( *a4 >= (unsigned int)v26 )
        goto LABEL_71;
      goto LABEL_104;
    }
LABEL_48:
    *a4 = 0;
    v7 = -1073741437;
    goto LABEL_73;
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
    || (v32 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    v32 = 0;
  }
  if ( v32 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v32,
      *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v33,
      9u,
      0xBu,
      (__int64)&WPP_0c4dbd50b0493a06c28798d01c904647_Traceguids);
  v25 = *(unsigned int **)(v10 + 136);
  if ( v25 )
  {
    v26 = *(unsigned __int8 *)v25;
    if ( !*a4 )
    {
      v7 = -1073741789;
      goto LABEL_72;
    }
    if ( *a4 >= (unsigned int)v26 )
    {
LABEL_71:
      memmove(a3, v25, v26);
LABEL_72:
      *a4 = v26;
      goto LABEL_73;
    }
LABEL_104:
    v7 = -1073741811;
    goto LABEL_73;
  }
  *a4 = 0;
LABEL_9:
  v7 = -1073741437;
LABEL_73:
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
    || (v29 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v29 = 0;
  }
  if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v12 = 0;
  if ( v29 || v12 )
    WPP_RECORDER_AND_TRACE_SF_d(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v29,
      v12,
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v33,
      9u,
      0x12u,
      (__int64)&WPP_0c4dbd50b0493a06c28798d01c904647_Traceguids);
  return v7;
}
