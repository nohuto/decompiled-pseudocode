/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_9051cf98f0ba0655adca5ac41533fb86___::CTaskWrapper__lambda_9051cf98f0ba0655adca5ac41533fb86_____lambda_9051cf98f0ba0655adca5ac41533fb86___ @ 0x180025BD8
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_9051cf98f0ba0655adca5ac41533fb86___ @ 0x180025C40 (Windows--Internal--ComTaskPool--QueueTask__lambda_9051cf98f0ba0655adca5ac41533fb86___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800C7AD8 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_9051cf98f0ba0655adca5ac41533fb86___::CTaskWrapper__lambda_9051cf98f0ba0655adca5ac41533fb86_____lambda_9051cf98f0ba0655adca5ac41533fb86___(
        __int64 a1,
        __int64 a2)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(a1);
  *(_QWORD *)(a1 + 16) = 0LL;
  if ( a1 + 16 != a2 )
  {
    *(_QWORD *)(a1 + 16) = *(_QWORD *)a2;
    *(_QWORD *)a2 = 0LL;
  }
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 8);
  *(_OWORD *)(a1 + 32) = *(_OWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 48) = *(_QWORD *)(a2 + 32);
  *(_QWORD *)a1 = off_1807A5068;
  return a1;
}
