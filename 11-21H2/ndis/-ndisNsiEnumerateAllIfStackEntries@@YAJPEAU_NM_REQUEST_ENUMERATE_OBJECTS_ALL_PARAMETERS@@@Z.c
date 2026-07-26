/*
 * XREFs of ?ndisNsiEnumerateAllIfStackEntries@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C00B1E90
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C000C8B0 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     ?ndisIfFindInterface@@YAPEAU_NDIS_IF_BLOCK@@K@Z @ 0x1C0022C88 (-ndisIfFindInterface@@YAPEAU_NDIS_IF_BLOCK@@K@Z.c)
 */

__int64 __fastcall ndisNsiEnumerateAllIfStackEntries(struct _NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS *a1)
{
  unsigned int v2; // ebx
  KIRQL v3; // r14
  int *v4; // r11
  unsigned int v5; // ebp
  int v6; // esi
  struct _LIST_ENTRY *Interface; // rax
  _QWORD *v8; // r11
  struct _LIST_ENTRY *v9; // r10
  PVOID *v10; // rcx
  PVOID *v11; // rax

  v2 = 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x10u,
      (struct _GUID *)&WPP_18d3cc1af93e36e581740cabd8754bec_Traceguids,
      a1);
  v3 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  KeAcquireSpinLockAtDpcLevel(&qword_1C00ECDB0);
  v4 = (int *)*((_QWORD *)a1 + 2);
  v5 = *((_DWORD *)a1 + 22);
  if ( v4 && *((_DWORD *)a1 + 6) != 8
    || *((_QWORD *)a1 + 7)
    || *((_DWORD *)a1 + 16)
    || *((_QWORD *)a1 + 9)
    || *((_DWORD *)a1 + 20)
    || *((_QWORD *)a1 + 5)
    || *((_DWORD *)a1 + 12) )
  {
    v2 = -1073741306;
  }
  else if ( v4 )
  {
    v6 = *v4;
    Interface = ndisIfFindInterface(*v4);
    v9 = Interface;
    if ( Interface )
    {
      *((_DWORD *)a1 + 22) = Interface[81].Flink;
      if ( LODWORD(Interface[81].Flink) )
      {
        if ( v5 )
        {
          v10 = (PVOID *)P;
          while ( v10 != &P && v2 < v5 )
          {
            v11 = v10;
            v10 = (PVOID *)*v10;
            if ( *((_DWORD *)v11 + 4) == v6 )
            {
              *v8++ = v11[2];
              ++v2;
            }
          }
          v2 = v5 < LODWORD(v9[81].Flink) ? 0x105 : 0;
        }
        else
        {
          v2 = 261;
        }
      }
    }
    else
    {
      v2 = -1073741772;
    }
  }
  KeReleaseSpinLockFromDpcLevel(&qword_1C00ECDB0);
  KeReleaseSpinLock(&ndisIfListLock, v3);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x11u,
      (struct _GUID *)&WPP_18d3cc1af93e36e581740cabd8754bec_Traceguids,
      (char)a1,
      v2);
  return v2;
}
