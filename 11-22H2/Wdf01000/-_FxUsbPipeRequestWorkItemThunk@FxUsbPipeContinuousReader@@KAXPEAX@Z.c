/*
 * XREFs of ?_FxUsbPipeRequestWorkItemThunk@FxUsbPipeContinuousReader@@KAXPEAX@Z @ 0x1C005B410
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0006060 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0006094 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?FxUsbPipeRequestWorkItemHandler@FxUsbPipeContinuousReader@@IEAAXPEAUFxUsbPipeRepeatReader@@@Z @ 0x1C005A2D8 (-FxUsbPipeRequestWorkItemHandler@FxUsbPipeContinuousReader@@IEAAXPEAUFxUsbPipeRepeatReader@@@Z.c)
 */

void __fastcall FxUsbPipeContinuousReader::_FxUsbPipeRequestWorkItemThunk(
        FxUsbPipeRepeatReader *Context,
        __int64 a2,
        unsigned __int8 a3)
{
  FxUsbPipeContinuousReader *Parent; // rbx
  FxUsbPipeRepeatReader *m_WorkItemRerunContext; // rsi
  FxNonPagedObject *m_Pipe; // rbp
  unsigned __int8 v6; // r8
  unsigned int m_WorkItemFlags; // ecx
  char v8; // di
  int v9; // eax
  unsigned __int8 v10; // r8
  unsigned __int8 v11; // r8
  unsigned __int8 v12; // r8
  unsigned int v13; // eax
  char v14; // di
  int v15; // ecx
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  Parent = Context->Parent;
  m_WorkItemRerunContext = Context;
  irql = 0;
  m_Pipe = Parent->m_Pipe;
  FxNonPagedObject::Lock(m_Pipe, &irql, a3);
  m_WorkItemFlags = Parent->m_WorkItemFlags;
  if ( (m_WorkItemFlags & 1) != 0 )
  {
    v8 = 1;
    Parent->m_WorkItemRerunContext = m_WorkItemRerunContext;
    v9 = 2;
  }
  else
  {
    v8 = 0;
    v9 = 1;
  }
  Parent->m_WorkItemFlags = v9 | m_WorkItemFlags;
  FxNonPagedObject::Unlock(m_Pipe, irql, v6);
  if ( !v8 )
  {
    do
    {
      FxUsbPipeContinuousReader::FxUsbPipeRequestWorkItemHandler(Parent, m_WorkItemRerunContext, v10);
      FxNonPagedObject::Lock(m_Pipe, &irql, v11);
      v13 = Parent->m_WorkItemFlags;
      if ( (v13 & 2) != 0 )
      {
        m_WorkItemRerunContext = (FxUsbPipeRepeatReader *)Parent->m_WorkItemRerunContext;
        v14 = 1;
        Parent->m_WorkItemRerunContext = 0LL;
        v15 = -3;
      }
      else
      {
        v14 = 0;
        v15 = -2;
      }
      Parent->m_WorkItemFlags = v15 & v13;
      FxNonPagedObject::Unlock(m_Pipe, irql, v12);
    }
    while ( v14 );
  }
}
