/*
 * XREFs of EtwActivityIdControl @ 0x1402DFD70
 * Callers:
 *     IoReuseIrp @ 0x14020BE20 (IoReuseIrp.c)
 *     IoSetActivityIdIrp @ 0x14020C120 (IoSetActivityIdIrp.c)
 *     sub_140556BE4 @ 0x140556BE4 (sub_140556BE4.c)
 *     sub_14069061C @ 0x14069061C (sub_14069061C.c)
 *     sub_140691CD8 @ 0x140691CD8 (sub_140691CD8.c)
 *     sub_140692780 @ 0x140692780 (sub_140692780.c)
 *     ?get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z_0 @ 0x14077E168 (-get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z_0.c)
 *     sub_1407806B0 @ 0x1407806B0 (sub_1407806B0.c)
 *     sub_140780AA8 @ 0x140780AA8 (sub_140780AA8.c)
 *     sub_140780EF0 @ 0x140780EF0 (sub_140780EF0.c)
 *     sub_140926C70 @ 0x140926C70 (sub_140926C70.c)
 *     sub_140926D10 @ 0x140926D10 (sub_140926D10.c)
 *     sub_140926DD8 @ 0x140926DD8 (sub_140926DD8.c)
 *     sub_14093A0B8 @ 0x14093A0B8 (sub_14093A0B8.c)
 *     sub_14093A954 @ 0x14093A954 (sub_14093A954.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall EtwActivityIdControl(ULONG ControlCode, LPGUID ActivityId)
{
  __int64 v2; // rax
  struct _KTHREAD *CurrentThread; // r8
  GUID *v5; // r9
  __int64 v6; // r8
  GUID *v7; // r9
  __int16 v8; // ax
  ULONG v9; // ecx
  ULONG v10; // ecx
  __int64 v11; // rax
  GUID v12; // xmm1
  NTSTATUS v13; // [rsp+0h] [rbp-28h]
  GUID *v14; // [rsp+8h] [rbp-20h]

  v13 = 0;
  if ( ControlCode == 3 )
  {
    v2 = *((_QWORD *)KeGetCurrentPrcb() + 4309);
    *(_QWORD *)ActivityId->Data4 = _InterlockedIncrement64((volatile signed __int64 *)(v2 + 8));
    *(_QWORD *)&ActivityId->Data1 = *(_QWORD *)v2;
    return v13;
  }
  CurrentThread = KeGetCurrentThread();
  if ( (*((_DWORD *)CurrentThread + 29) & 0x400) == 0 && *((_BYTE *)CurrentThread + 586) != 1 )
  {
    v5 = (GUID *)*((_QWORD *)CurrentThread + 30);
    if ( v5 )
    {
      v14 = v5 + 369;
      v6 = *((_QWORD *)KeGetCurrentThread() + 23);
      if ( *(_QWORD *)(v6 + 1408) && ((v8 = *(_WORD *)(v6 + 2412), v8 == 332) || v8 == 452) )
      {
        v7 = v5 + 757;
        v14 = v7;
      }
      else
      {
        v7 = v5 + 369;
      }
      if ( ControlCode == 1 )
      {
        *ActivityId = *v7;
      }
      else
      {
        v9 = ControlCode - 2;
        if ( v9 )
        {
          v10 = v9 - 2;
          if ( v10 )
          {
            if ( v10 == 1 )
            {
              *ActivityId = *v7;
              v11 = *((_QWORD *)KeGetCurrentPrcb() + 4309);
              *(_QWORD *)v14->Data4 = _InterlockedIncrement64((volatile signed __int64 *)(v11 + 8));
              *(_QWORD *)&v14->Data1 = *(_QWORD *)v11;
            }
            else
            {
              return -1073741811;
            }
          }
          else
          {
            v12 = *v7;
            *v7 = *ActivityId;
            *ActivityId = v12;
          }
        }
        else
        {
          *v7 = *ActivityId;
        }
      }
      return v13;
    }
  }
  return -1073741637;
}
