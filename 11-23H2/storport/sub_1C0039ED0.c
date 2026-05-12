/*
 * XREFs of sub_1C0039ED0 @ 0x1C0039ED0
 * Callers:
 *     sub_1C00161D0 @ 0x1C00161D0 (sub_1C00161D0.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C0007CF4 @ 0x1C0007CF4 (sub_1C0007CF4.c)
 *     sub_1C00144AC @ 0x1C00144AC (sub_1C00144AC.c)
 *     sub_1C0039770 @ 0x1C0039770 (sub_1C0039770.c)
 */

__int64 __fastcall sub_1C0039ED0(PVOID Context, PIRP Irp)
{
  ULONG v4; // eax
  __int64 v5; // rax
  _QWORD *v6; // r14
  __int64 v7; // rbx
  unsigned int v8; // ebx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  struct _IO_STACK_LOCATION *v10; // rax
  signed int v11; // eax
  unsigned int v12; // eax

  if ( byte_1C0093ADC
    && (v4 = IoSizeofWorkItem(),
        v5 = sub_1C0007CF4(64LL, v4 + 16LL, 1230463314LL, *((_QWORD *)Context + 1)),
        (v6 = (_QWORD *)v5) != 0LL) )
  {
    v7 = v5 + 16;
    IoInitializeWorkItem(*((PVOID *)Context + 1), (PIO_WORKITEM)(v5 + 16));
    *v6 = v7;
    v6[1] = Irp;
    v8 = 259;
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
    *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
    *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                               + 6);
    CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
    CurrentStackLocation[-1].Control = 0;
    v10 = Irp->Tail.Overlay.CurrentStackLocation;
    v10[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)&sub_1C003D570;
    v10[-1].Context = v6;
    v10[-1].Control = -32;
    Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
    IofCallDriver(*((PDEVICE_OBJECT *)Context + 3), Irp);
  }
  else
  {
    v11 = sub_1C00144AC(*((struct _DEVICE_OBJECT **)Context + 3), Irp);
    v8 = v11;
    if ( v11 >= 0 )
    {
      v12 = sub_1C0039770((char *)Context, (__int64)Irp);
      return (unsigned int)sub_1C0003440(Irp, 0, v12);
    }
    else
    {
      sub_1C0003440(Irp, 0, v11);
    }
  }
  return v8;
}
