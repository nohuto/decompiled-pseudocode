/*
 * XREFs of TpDisassociateCallback @ 0x180084A50
 * Callers:
 *     <none>
 * Callees:
 *     TppBarrierAdjust @ 0x180068030 (TppBarrierAdjust.c)
 */

void __cdecl TpDisassociateCallback(PTP_CALLBACK_INSTANCE Instance)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  _RTL_SRWLOCK *v3; // rbx
  char v4; // al
  unsigned int v5; // eax
  _RTL_SRWLOCK *Value; // rdx

  if ( !Instance
    || (v3 = (_RTL_SRWLOCK *)*((_QWORD *)Instance + 23)) == 0LL
    || *((_QWORD *)Instance + 22)
    || (v4 = *((_BYTE *)Instance + 76), (v4 & 2) != 0) )
  {
    TppRaiseInvalidParameter(Instance, v1, v2);
  }
  else
  {
    *((_BYTE *)Instance + 76) = v4 | 2;
    v5 = *((_DWORD *)Instance + 36) & 0xFFFFFFBF;
    *((_DWORD *)Instance + 36) = v5;
    Value = (_RTL_SRWLOCK *)v3[2].Value;
    *((_QWORD *)Instance + 22) = Value;
    if ( Value )
    {
      *((_DWORD *)Instance + 36) = v5 | 0x20;
      TppBarrierAdjust(Value + 4, 1, 0);
    }
    TppBarrierAdjust(v3 + 7, -1, 0);
  }
}
